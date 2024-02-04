package com.example.First_App;


/**
 *    Copyright 2021 The MathWorks, Inc.
 */


import android.app.Activity;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;

import com.example.First_App.databinding.CameraViewBinding;


/**
 * A placeholder fragment containing camera or a scope.
 */
public class CameraScopeFragment extends Fragment {
    /**
     * The fragment argument representing the section number for this
     * fragment.
     */
    private static final String ARG_SECTION_NUMBER = "section_number";
    
        CameraViewBinding cameraViewBinding;

    
    private int sectionNumber;
    private OnFragmentInteractionListener mListener;


    public CameraScopeFragment() {
    }

    /**
     * Returns a new instance of this fragment for the given section
     * number.
     */
    public static CameraScopeFragment newInstance(int sectionNumber) {
        CameraScopeFragment fragment = new CameraScopeFragment();
        Bundle args = new Bundle();
        args.putInt(ARG_SECTION_NUMBER, sectionNumber);
        fragment.setArguments(args);
        return fragment;
    }

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        sectionNumber = getArguments().getInt(ARG_SECTION_NUMBER);
        switch (sectionNumber) {
                        case 1:
                cameraViewBinding = CameraViewBinding.inflate(inflater, container, false);
                return cameraViewBinding.getRoot();

        }

        return null;
    }

    @Override
    public void onViewCreated(@NonNull View view, @Nullable Bundle savedInstanceState) {
        super.onViewCreated(view, savedInstanceState);
    }

    @Override
    public void onDetach() {
        super.onDetach();
        mListener = null;
    }

    @Override
    public void onStart() {
        super.onStart();
        mListener.onFragmentStart("dot" + sectionNumber);
    }

    @Override
    public void onResume() {
        super.onResume();
        mListener.onFragmentResume("dot" + sectionNumber);
    }

    @Override
    public void onPause() {
        super.onPause();
        mListener.onFragmentPause("dot" + sectionNumber);
    }

    public void setFragmentInteractionListener(Activity activity) {
        try {
            mListener = (OnFragmentInteractionListener) activity;
        } catch (ClassCastException e) {
            throw new ClassCastException(activity.toString()
                    + " must implement OnFragmentInteractionListener");
        }
    }

}
