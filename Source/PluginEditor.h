/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Week2pluginTestAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    Week2pluginTestAudioProcessorEditor (Week2pluginTestAudioProcessor&);
    ~Week2pluginTestAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Week2pluginTestAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Week2pluginTestAudioProcessorEditor)
};
