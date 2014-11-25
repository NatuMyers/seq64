/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
#include "../JuceLibraryCode/JuceHeader.h"
#include "AppProps.h"
//[/Headers]

#include "AudioseqPane.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
AudioseqPane::AudioseqPane (AppProps& props)
    : p(props)
{
    addAndMakeVisible (groupComponent = new GroupComponent ("new group",
                                                            TRANS("Loaded Sequence")));

    addAndMakeVisible (groupComponent3 = new GroupComponent ("new group",
                                                             TRANS("Command Editor")));

    addAndMakeVisible (groupComponent6 = new GroupComponent ("new group",
                                                             TRANS("Edit Parameter")));

    addAndMakeVisible (groupComponent5 = new GroupComponent ("new group",
                                                             TRANS("Valid in")));

    addAndMakeVisible (label10 = new Label ("new label",
                                            TRANS("Command:")));
    label10->setFont (Font (15.00f, Font::plain));
    label10->setJustificationType (Justification::centredLeft);
    label10->setEditable (false, false, false);
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (txtCmd = new TextEditor ("new text editor"));
    txtCmd->setMultiLine (false);
    txtCmd->setReturnKeyStartsNewLine (false);
    txtCmd->setReadOnly (false);
    txtCmd->setScrollbarsShown (true);
    txtCmd->setCaretVisible (true);
    txtCmd->setPopupMenuEnabled (true);
    txtCmd->setText (String::empty);

    addAndMakeVisible (btnCmdAdd = new TextButton ("new button"));
    btnCmdAdd->setButtonText (TRANS("Add"));
    btnCmdAdd->setConnectedEdges (Button::ConnectedOnBottom);
    btnCmdAdd->addListener (this);

    addAndMakeVisible (btnCmdDel = new TextButton ("new button"));
    btnCmdDel->setButtonText (TRANS("Del"));
    btnCmdDel->setConnectedEdges (Button::ConnectedOnTop);
    btnCmdDel->addListener (this);

    addAndMakeVisible (optCmdDataFixed = new ToggleButton ("new toggle button"));
    optCmdDataFixed->setButtonText (TRANS("Fixed"));
    optCmdDataFixed->setRadioGroupId (1);
    optCmdDataFixed->addListener (this);
    optCmdDataFixed->setToggleState (true, dontSendNotification);

    addAndMakeVisible (optCmdDataVar = new ToggleButton ("new toggle button"));
    optCmdDataVar->setButtonText (TRANS("Variable"));
    optCmdDataVar->setRadioGroupId (1);
    optCmdDataVar->addListener (this);

    addAndMakeVisible (lblCmdDataSize = new Label ("new label",
                                                   TRANS("length")));
    lblCmdDataSize->setFont (Font (15.00f, Font::plain));
    lblCmdDataSize->setJustificationType (Justification::centredLeft);
    lblCmdDataSize->setEditable (false, false, false);
    lblCmdDataSize->setColour (TextEditor::textColourId, Colours::black);
    lblCmdDataSize->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (txtCmdDataSize = new TextEditor ("txtCmdDat"));
    txtCmdDataSize->setMultiLine (false);
    txtCmdDataSize->setReturnKeyStartsNewLine (false);
    txtCmdDataSize->setReadOnly (false);
    txtCmdDataSize->setScrollbarsShown (true);
    txtCmdDataSize->setCaretVisible (true);
    txtCmdDataSize->setPopupMenuEnabled (true);
    txtCmdDataSize->setText (TRANS("1"));

    addAndMakeVisible (label11 = new Label ("new label",
                                            TRANS("(dec)")));
    label11->setFont (Font (15.00f, Font::plain));
    label11->setJustificationType (Justification::centredLeft);
    label11->setEditable (false, false, false);
    label11->setColour (TextEditor::textColourId, Colours::black);
    label11->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label2 = new Label ("new label",
                                           TRANS("Action:")));
    label2->setFont (Font (15.00f, Font::plain));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (cbxAction = new ComboBox ("Action"));
    cbxAction->setEditableText (false);
    cbxAction->setJustificationType (Justification::centredLeft);
    cbxAction->setTextWhenNothingSelected (String::empty);
    cbxAction->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    cbxAction->addItem (TRANS("No Action"), 1);
    cbxAction->addItem (TRANS("End of Data"), 2);
    cbxAction->addItem (TRANS("Timestamp"), 3);
    cbxAction->addItem (TRANS("Ptr Channel Header"), 4);
    cbxAction->addItem (TRANS("Ptr Loop Start"), 5);
    cbxAction->addItem (TRANS("Ptr Track Data"), 6);
    cbxAction->addItem (TRANS("Ptr More Track Data"), 7);
    cbxAction->addItem (TRANS("Master Volume"), 8);
    cbxAction->addItem (TRANS("Tempo"), 9);
    cbxAction->addItem (TRANS("Chn Priority"), 10);
    cbxAction->addItem (TRANS("Chn Volume"), 11);
    cbxAction->addItem (TRANS("Chn Pan"), 12);
    cbxAction->addItem (TRANS("Chn Effects"), 13);
    cbxAction->addItem (TRANS("Chn Vibrato"), 14);
    cbxAction->addItem (TRANS("Chn Pitch Bend"), 15);
    cbxAction->addItem (TRANS("Chn Instrument"), 16);
    cbxAction->addItem (TRANS("Chn Transpose"), 17);
    cbxAction->addItem (TRANS("Layer Transpose"), 18);
    cbxAction->addItem (TRANS("Track Note"), 19);
    cbxAction->addListener (this);

    addAndMakeVisible (label9 = new Label ("new label",
                                           TRANS("Name:")));
    label9->setFont (Font (15.00f, Font::plain));
    label9->setJustificationType (Justification::centredLeft);
    label9->setEditable (false, false, false);
    label9->setColour (TextEditor::textColourId, Colours::black);
    label9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (txtCmdName = new TextEditor ("new text editor"));
    txtCmdName->setMultiLine (false);
    txtCmdName->setReturnKeyStartsNewLine (false);
    txtCmdName->setReadOnly (false);
    txtCmdName->setScrollbarsShown (true);
    txtCmdName->setCaretVisible (true);
    txtCmdName->setPopupMenuEnabled (true);
    txtCmdName->setText (String::empty);

    addAndMakeVisible (txtCmdEnd = new TextEditor ("new text editor"));
    txtCmdEnd->setMultiLine (false);
    txtCmdEnd->setReturnKeyStartsNewLine (false);
    txtCmdEnd->setReadOnly (false);
    txtCmdEnd->setScrollbarsShown (true);
    txtCmdEnd->setCaretVisible (true);
    txtCmdEnd->setPopupMenuEnabled (true);
    txtCmdEnd->setText (String::empty);

    addAndMakeVisible (label12 = new Label ("new label",
                                            TRANS("to")));
    label12->setFont (Font (15.00f, Font::plain));
    label12->setJustificationType (Justification::centredLeft);
    label12->setEditable (false, false, false);
    label12->setColour (TextEditor::textColourId, Colours::black);
    label12->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (optCmdSeq = new ToggleButton ("new toggle button"));
    optCmdSeq->setButtonText (TRANS("Seq header"));
    optCmdSeq->addListener (this);

    addAndMakeVisible (optCmdChn = new ToggleButton ("new toggle button"));
    optCmdChn->setButtonText (TRANS("Chn header"));
    optCmdChn->addListener (this);

    addAndMakeVisible (optCmdTrk = new ToggleButton ("new toggle button"));
    optCmdTrk->setButtonText (TRANS("Track data"));
    optCmdTrk->addListener (this);

    addAndMakeVisible (label13 = new Label ("new label",
                                            TRANS("Parameters:")));
    label13->setFont (Font (15.00f, Font::plain));
    label13->setJustificationType (Justification::centredLeft);
    label13->setEditable (false, false, false);
    label13->setColour (TextEditor::textColourId, Colours::black);
    label13->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (btnParamAdd = new TextButton ("new button"));
    btnParamAdd->setButtonText (TRANS("Add"));
    btnParamAdd->setConnectedEdges (Button::ConnectedOnBottom);
    btnParamAdd->addListener (this);

    addAndMakeVisible (btnParamDel = new TextButton ("new button"));
    btnParamDel->setButtonText (TRANS("Del"));
    btnParamDel->setConnectedEdges (Button::ConnectedOnTop);
    btnParamDel->addListener (this);

    addAndMakeVisible (btnParamUp = new TextButton ("new button"));
    btnParamUp->setButtonText (TRANS("Up"));
    btnParamUp->setConnectedEdges (Button::ConnectedOnBottom);
    btnParamUp->addListener (this);

    addAndMakeVisible (btnParamDn = new TextButton ("new button"));
    btnParamDn->setButtonText (TRANS("Dn"));
    btnParamDn->setConnectedEdges (Button::ConnectedOnTop);
    btnParamDn->addListener (this);

    addAndMakeVisible (optCmdOffset = new ToggleButton ("new toggle button"));
    optCmdOffset->setButtonText (TRANS("Cmd Offset (no data)"));
    optCmdOffset->setRadioGroupId (1);
    optCmdOffset->addListener (this);

    addAndMakeVisible (label14 = new Label ("new label",
                                            TRANS("Data source:")));
    label14->setFont (Font (15.00f, Font::plain));
    label14->setJustificationType (Justification::centredLeft);
    label14->setEditable (false, false, false);
    label14->setColour (TextEditor::textColourId, Colours::black);
    label14->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label15 = new Label ("new label",
                                            TRANS("Meaning:")));
    label15->setFont (Font (15.00f, Font::plain));
    label15->setJustificationType (Justification::centredLeft);
    label15->setEditable (false, false, false);
    label15->setColour (TextEditor::textColourId, Colours::black);
    label15->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (txtParamName = new TextEditor ("new text editor"));
    txtParamName->setMultiLine (false);
    txtParamName->setReturnKeyStartsNewLine (false);
    txtParamName->setReadOnly (false);
    txtParamName->setScrollbarsShown (true);
    txtParamName->setCaretVisible (true);
    txtParamName->setPopupMenuEnabled (true);
    txtParamName->setText (String::empty);

    addAndMakeVisible (label16 = new Label ("new label",
                                            TRANS("Name:")));
    label16->setFont (Font (15.00f, Font::plain));
    label16->setJustificationType (Justification::centredLeft);
    label16->setEditable (false, false, false);
    label16->setColour (TextEditor::textColourId, Colours::black);
    label16->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (cbxMeaning = new ComboBox ("Meaning"));
    cbxMeaning->setEditableText (false);
    cbxMeaning->setJustificationType (Justification::centredLeft);
    cbxMeaning->setTextWhenNothingSelected (String::empty);
    cbxMeaning->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    cbxMeaning->addListener (this);

    addAndMakeVisible (label17 = new Label ("new label",
                                            TRANS("Add (dec):")));
    label17->setFont (Font (15.00f, Font::plain));
    label17->setJustificationType (Justification::centredLeft);
    label17->setEditable (false, false, false);
    label17->setColour (TextEditor::textColourId, Colours::black);
    label17->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label18 = new Label ("new label",
                                            TRANS("Multiply:")));
    label18->setFont (Font (15.00f, Font::plain));
    label18->setJustificationType (Justification::centredLeft);
    label18->setEditable (false, false, false);
    label18->setColour (TextEditor::textColourId, Colours::black);
    label18->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (txtParamAdd = new TextEditor ("new text editor"));
    txtParamAdd->setMultiLine (false);
    txtParamAdd->setReturnKeyStartsNewLine (false);
    txtParamAdd->setReadOnly (false);
    txtParamAdd->setScrollbarsShown (true);
    txtParamAdd->setCaretVisible (true);
    txtParamAdd->setPopupMenuEnabled (true);
    txtParamAdd->setText (TRANS("0"));

    addAndMakeVisible (txtParamMult = new TextEditor ("new text editor"));
    txtParamMult->setMultiLine (false);
    txtParamMult->setReturnKeyStartsNewLine (false);
    txtParamMult->setReadOnly (false);
    txtParamMult->setScrollbarsShown (true);
    txtParamMult->setCaretVisible (true);
    txtParamMult->setPopupMenuEnabled (true);
    txtParamMult->setText (TRANS("1.0"));

    addAndMakeVisible (btnCmdUp = new TextButton ("new button"));
    btnCmdUp->setButtonText (TRANS("Up"));
    btnCmdUp->setConnectedEdges (Button::ConnectedOnBottom);
    btnCmdUp->addListener (this);

    addAndMakeVisible (btnCmdDn = new TextButton ("new button"));
    btnCmdDn->setButtonText (TRANS("Dn"));
    btnCmdDn->setConnectedEdges (Button::ConnectedOnTop);
    btnCmdDn->addListener (this);

    addAndMakeVisible (label3 = new Label ("new label",
                                           TRANS("Sections:")));
    label3->setFont (Font (15.00f, Font::plain));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (btnSecAdd = new TextButton ("new button"));
    btnSecAdd->setButtonText (TRANS("Add"));
    btnSecAdd->setConnectedEdges (Button::ConnectedOnRight);
    btnSecAdd->addListener (this);

    addAndMakeVisible (btnSecDelete = new TextButton ("new button"));
    btnSecDelete->setButtonText (TRANS("Del"));
    btnSecDelete->setConnectedEdges (Button::ConnectedOnLeft);
    btnSecDelete->addListener (this);

    addAndMakeVisible (label4 = new Label ("new label",
                                           TRANS("Commands:")));
    label4->setFont (Font (15.00f, Font::plain));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (groupComponent2 = new GroupComponent ("new group",
                                                             TRANS("Interpret As")));

    addAndMakeVisible (optSecSeq = new ToggleButton ("new toggle button"));
    optSecSeq->setButtonText (TRANS("Seq header"));
    optSecSeq->setRadioGroupId (2);
    optSecSeq->addListener (this);

    addAndMakeVisible (optSecChn = new ToggleButton ("new toggle button"));
    optSecChn->setButtonText (TRANS("Chn header"));
    optSecChn->setRadioGroupId (2);
    optSecChn->addListener (this);

    addAndMakeVisible (optSecTrk = new ToggleButton ("new toggle button"));
    optSecTrk->setButtonText (TRANS("Track data"));
    optSecTrk->setRadioGroupId (2);
    optSecTrk->addListener (this);

    addAndMakeVisible (btnSeqCmdAdd = new TextButton ("new button"));
    btnSeqCmdAdd->setButtonText (TRANS("Add"));
    btnSeqCmdAdd->setConnectedEdges (Button::ConnectedOnRight);
    btnSeqCmdAdd->addListener (this);

    addAndMakeVisible (btnSeqCmdDelete = new TextButton ("new button"));
    btnSeqCmdDelete->setButtonText (TRANS("Del"));
    btnSeqCmdDelete->setConnectedEdges (Button::ConnectedOnLeft);
    btnSeqCmdDelete->addListener (this);

    addAndMakeVisible (btnSeqCmdUp = new TextButton ("new button"));
    btnSeqCmdUp->setButtonText (TRANS("Up"));
    btnSeqCmdUp->setConnectedEdges (Button::ConnectedOnRight);
    btnSeqCmdUp->addListener (this);

    addAndMakeVisible (btnSeqCmdDn = new TextButton ("new button"));
    btnSeqCmdDn->setButtonText (TRANS("Dn"));
    btnSeqCmdDn->setConnectedEdges (Button::ConnectedOnLeft);
    btnSeqCmdDn->addListener (this);

    addAndMakeVisible (label5 = new Label ("new label",
                                           TRANS("Command:")));
    label5->setFont (Font (15.00f, Font::plain));
    label5->setJustificationType (Justification::centredLeft);
    label5->setEditable (false, false, false);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (cbxSeqCmdType = new ComboBox ("new combo box"));
    cbxSeqCmdType->setEditableText (false);
    cbxSeqCmdType->setJustificationType (Justification::centredLeft);
    cbxSeqCmdType->setTextWhenNothingSelected (String::empty);
    cbxSeqCmdType->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    cbxSeqCmdType->addListener (this);

    addAndMakeVisible (label6 = new Label ("new label",
                                           TRANS("Parameters:")));
    label6->setFont (Font (15.00f, Font::plain));
    label6->setJustificationType (Justification::centredLeft);
    label6->setEditable (false, false, false);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label7 = new Label ("new label",
                                           TRANS("Value:")));
    label7->setFont (Font (15.00f, Font::plain));
    label7->setJustificationType (Justification::centredLeft);
    label7->setEditable (false, false, false);
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (txtSeqCmdValue = new TextEditor ("new text editor"));
    txtSeqCmdValue->setMultiLine (false);
    txtSeqCmdValue->setReturnKeyStartsNewLine (false);
    txtSeqCmdValue->setReadOnly (false);
    txtSeqCmdValue->setScrollbarsShown (true);
    txtSeqCmdValue->setCaretVisible (true);
    txtSeqCmdValue->setPopupMenuEnabled (true);
    txtSeqCmdValue->setText (String::empty);

    addAndMakeVisible (lblSeqInfo = new Label ("new label",
                                               TRANS("Sequence information")));
    lblSeqInfo->setFont (Font (15.00f, Font::plain));
    lblSeqInfo->setJustificationType (Justification::centredLeft);
    lblSeqInfo->setEditable (false, false, false);
    lblSeqInfo->setColour (TextEditor::textColourId, Colours::black);
    lblSeqInfo->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (groupComponent4 = new GroupComponent ("new group",
                                                             TRANS("MIDI File")));

    addAndMakeVisible (lblSeqCmdOutput = new Label ("new label",
                                                    TRANS("[actual command]")));
    lblSeqCmdOutput->setFont (Font (15.00f, Font::plain));
    lblSeqCmdOutput->setJustificationType (Justification::centredLeft);
    lblSeqCmdOutput->setEditable (false, false, false);
    lblSeqCmdOutput->setColour (TextEditor::textColourId, Colours::black);
    lblSeqCmdOutput->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label19 = new Label ("new label",
                                            TRANS("Type:")));
    label19->setFont (Font (15.00f, Font::plain));
    label19->setJustificationType (Justification::centredLeft);
    label19->setEditable (false, false, false);
    label19->setColour (TextEditor::textColourId, Colours::black);
    label19->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (lblValueEquiv = new Label ("new label",
                                                  TRANS("[dec, note equiv.]")));
    lblValueEquiv->setFont (Font (15.00f, Font::plain));
    lblValueEquiv->setJustificationType (Justification::centredLeft);
    lblValueEquiv->setEditable (false, false, false);
    lblValueEquiv->setColour (TextEditor::textColourId, Colours::black);
    lblValueEquiv->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (btnMIDIExport = new TextButton ("new button"));
    btnMIDIExport->setButtonText (TRANS("Export"));
    btnMIDIExport->setConnectedEdges (Button::ConnectedOnRight);
    btnMIDIExport->addListener (this);

    addAndMakeVisible (btnMIDIImport = new TextButton ("new button"));
    btnMIDIImport->setButtonText (TRANS("Import"));
    btnMIDIImport->setConnectedEdges (Button::ConnectedOnLeft);
    btnMIDIImport->addListener (this);

    addAndMakeVisible (label20 = new Label ("new label",
                                            TRANS("Bend range:")));
    label20->setFont (Font (15.00f, Font::plain));
    label20->setJustificationType (Justification::centredLeft);
    label20->setEditable (false, false, false);
    label20->setColour (TextEditor::textColourId, Colours::black);
    label20->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (txtMIDIBend = new TextEditor ("new text editor"));
    txtMIDIBend->setMultiLine (false);
    txtMIDIBend->setReturnKeyStartsNewLine (false);
    txtMIDIBend->setReadOnly (false);
    txtMIDIBend->setScrollbarsShown (true);
    txtMIDIBend->setCaretVisible (true);
    txtMIDIBend->setPopupMenuEnabled (true);
    txtMIDIBend->setText (TRANS("4"));

    addAndMakeVisible (label21 = new Label ("new label",
                                            TRANS("PPQN multiplier:")));
    label21->setFont (Font (15.00f, Font::plain));
    label21->setJustificationType (Justification::centredLeft);
    label21->setEditable (false, false, false);
    label21->setColour (TextEditor::textColourId, Colours::black);
    label21->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (txtMIDIPPQN = new TextEditor ("new text editor"));
    txtMIDIPPQN->setMultiLine (false);
    txtMIDIPPQN->setReturnKeyStartsNewLine (false);
    txtMIDIPPQN->setReadOnly (false);
    txtMIDIPPQN->setScrollbarsShown (true);
    txtMIDIPPQN->setCaretVisible (true);
    txtMIDIPPQN->setPopupMenuEnabled (true);
    txtMIDIPPQN->setText (TRANS("2"));

    addAndMakeVisible (label22 = new Label ("new label",
                                            TRANS("x48")));
    label22->setFont (Font (15.00f, Font::plain));
    label22->setJustificationType (Justification::centredLeft);
    label22->setEditable (false, false, false);
    label22->setColour (TextEditor::textColourId, Colours::black);
    label22->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label23 = new Label ("new label",
                                            TRANS("Chn volume to:")));
    label23->setFont (Font (15.00f, Font::plain));
    label23->setJustificationType (Justification::centredLeft);
    label23->setEditable (false, false, false);
    label23->setColour (TextEditor::textColourId, Colours::black);
    label23->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (cbxMIDIChnVol = new ComboBox ("new combo box"));
    cbxMIDIChnVol->setEditableText (false);
    cbxMIDIChnVol->setJustificationType (Justification::centredLeft);
    cbxMIDIChnVol->setTextWhenNothingSelected (TRANS("ERROR"));
    cbxMIDIChnVol->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    cbxMIDIChnVol->addItem (TRANS("CC7 (Volume)"), 1);
    cbxMIDIChnVol->addItem (TRANS("CC11 (Expr)"), 2);
    cbxMIDIChnVol->addListener (this);

    addAndMakeVisible (label24 = new Label ("new label",
                                            TRANS("Master volume to:")));
    label24->setFont (Font (15.00f, Font::plain));
    label24->setJustificationType (Justification::centredLeft);
    label24->setEditable (false, false, false);
    label24->setColour (TextEditor::textColourId, Colours::black);
    label24->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (cbxMIDIMtrVol = new ComboBox ("new combo box"));
    cbxMIDIMtrVol->setEditableText (false);
    cbxMIDIMtrVol->setJustificationType (Justification::centredLeft);
    cbxMIDIMtrVol->setTextWhenNothingSelected (TRANS("ERROR"));
    cbxMIDIMtrVol->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    cbxMIDIMtrVol->addItem (TRANS("CC7 (Volume)"), 1);
    cbxMIDIMtrVol->addItem (TRANS("CC11 (Expr)"), 2);
    cbxMIDIMtrVol->addItem (TRANS("CC16 (GPC1)"), 3);
    cbxMIDIMtrVol->addItem (TRANS("CC24 (None)"), 4);
    cbxMIDIMtrVol->addItem (TRANS("SysEx MstrVol"), 5);
    cbxMIDIMtrVol->addListener (this);

    addAndMakeVisible (label25 = new Label ("new label",
                                            TRANS("Uses Audiobank information")));
    label25->setFont (Font (15.00f, Font::plain));
    label25->setJustificationType (Justification::centredLeft);
    label25->setEditable (false, false, false);
    label25->setColour (TextEditor::textColourId, Colours::black);
    label25->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label26 = new Label ("new label",
                                            TRANS("Chn priority to:")));
    label26->setFont (Font (15.00f, Font::plain));
    label26->setJustificationType (Justification::centredLeft);
    label26->setEditable (false, false, false);
    label26->setColour (TextEditor::textColourId, Colours::black);
    label26->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (cbxChnPriority = new ComboBox ("new combo box"));
    cbxChnPriority->setEditableText (false);
    cbxChnPriority->setJustificationType (Justification::centredLeft);
    cbxChnPriority->setTextWhenNothingSelected (TRANS("ERROR"));
    cbxChnPriority->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    cbxChnPriority->addItem (TRANS("CC17 (GPC2)"), 1);
    cbxChnPriority->addItem (TRANS("CC25 (None)"), 2);
    cbxChnPriority->addItem (TRANS("CC79 (SC10)"), 3);
    cbxChnPriority->addListener (this);


    //[UserPreSize]

    lsmCommands = new TextListModel();
    lsmCommands->setListener(this);

    addAndMakeVisible(lstCommands = new ListBox("Commands", lsmCommands));
    lstCommands->setMultipleSelectionEnabled(false);
    lstCommands->setRowHeight(16);

    lsmParameters = new TextListModel();
    lsmParameters->setListener(this);

    addAndMakeVisible(lstParameters = new ListBox("Parameters", lsmParameters));
    lstParameters->setMultipleSelectionEnabled(false);
    lstParameters->setRowHeight(16);

    lsmSeqSections = new TextListModel();
    lsmSeqSections->setListener(this);

    addAndMakeVisible(lstSeqSections = new ListBox("Sequence", lsmSeqSections));
    lstSeqSections->setMultipleSelectionEnabled(false);
    lstSeqSections->setRowHeight(16);

    lsmSeqCommands = new TextListModel();
    lsmSeqCommands->setListener(this);

    addAndMakeVisible(lstSeqCommands = new ListBox("Sequence", lsmSeqCommands));
    lstSeqCommands->setMultipleSelectionEnabled(false);
    lstSeqCommands->setRowHeight(16);

    lsmSeqCmdParams = new TextListModel();
    lsmSeqCmdParams->setListener(this);

    addAndMakeVisible(lstSeqCmdParams = new ListBox("Sequence", lsmSeqCmdParams));
    lstSeqCmdParams->setMultipleSelectionEnabled(false);
    lstSeqCmdParams->setRowHeight(16);


    txtCmdName->addListener(this);
    txtCmd->addListener(this);
    txtCmdEnd->addListener(this);
    txtParamName->addListener(this);
    txtCmdDataSize->addListener(this);
    txtParamAdd->addListener(this);
    txtParamMult->addListener(this);
    txtMIDIBend->addListener(this);
    txtMIDIPPQN->addListener(this);


    cbxMIDIChnVol->setSelectedItemIndex(0, dontSendNotification);
    cbxMIDIMtrVol->setSelectedItemIndex(3, dontSendNotification);
    cbxChnPriority->setSelectedItemIndex(1, dontSendNotification);

    //[/UserPreSize]

    setSize (1000, 632);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

AudioseqPane::~AudioseqPane()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    groupComponent = nullptr;
    groupComponent3 = nullptr;
    groupComponent6 = nullptr;
    groupComponent5 = nullptr;
    label10 = nullptr;
    txtCmd = nullptr;
    btnCmdAdd = nullptr;
    btnCmdDel = nullptr;
    optCmdDataFixed = nullptr;
    optCmdDataVar = nullptr;
    lblCmdDataSize = nullptr;
    txtCmdDataSize = nullptr;
    label11 = nullptr;
    label2 = nullptr;
    cbxAction = nullptr;
    label9 = nullptr;
    txtCmdName = nullptr;
    txtCmdEnd = nullptr;
    label12 = nullptr;
    optCmdSeq = nullptr;
    optCmdChn = nullptr;
    optCmdTrk = nullptr;
    label13 = nullptr;
    btnParamAdd = nullptr;
    btnParamDel = nullptr;
    btnParamUp = nullptr;
    btnParamDn = nullptr;
    optCmdOffset = nullptr;
    label14 = nullptr;
    label15 = nullptr;
    txtParamName = nullptr;
    label16 = nullptr;
    cbxMeaning = nullptr;
    label17 = nullptr;
    label18 = nullptr;
    txtParamAdd = nullptr;
    txtParamMult = nullptr;
    btnCmdUp = nullptr;
    btnCmdDn = nullptr;
    label3 = nullptr;
    btnSecAdd = nullptr;
    btnSecDelete = nullptr;
    label4 = nullptr;
    groupComponent2 = nullptr;
    optSecSeq = nullptr;
    optSecChn = nullptr;
    optSecTrk = nullptr;
    btnSeqCmdAdd = nullptr;
    btnSeqCmdDelete = nullptr;
    btnSeqCmdUp = nullptr;
    btnSeqCmdDn = nullptr;
    label5 = nullptr;
    cbxSeqCmdType = nullptr;
    label6 = nullptr;
    label7 = nullptr;
    txtSeqCmdValue = nullptr;
    lblSeqInfo = nullptr;
    groupComponent4 = nullptr;
    lblSeqCmdOutput = nullptr;
    label19 = nullptr;
    lblValueEquiv = nullptr;
    btnMIDIExport = nullptr;
    btnMIDIImport = nullptr;
    label20 = nullptr;
    txtMIDIBend = nullptr;
    label21 = nullptr;
    txtMIDIPPQN = nullptr;
    label22 = nullptr;
    label23 = nullptr;
    cbxMIDIChnVol = nullptr;
    label24 = nullptr;
    cbxMIDIMtrVol = nullptr;
    label25 = nullptr;
    label26 = nullptr;
    cbxChnPriority = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    lstCommands = nullptr;
    lstParameters = nullptr;
    lstSeqSections = nullptr;
    lstSeqCommands = nullptr;
    lstSeqCmdParams = nullptr;
    lsmCommands = nullptr;
    lsmParameters = nullptr;
    lsmSeqSections = nullptr;
    lsmSeqCommands = nullptr;
    lsmSeqCmdParams = nullptr;
    //[/Destructor]
}

//==============================================================================
void AudioseqPane::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void AudioseqPane::resized()
{
    groupComponent->setBounds (408, 0, 704, 624);
    groupComponent3->setBounds (0, 0, 400, 480);
    groupComponent6->setBounds (152, 264, 240, 208);
    groupComponent5->setBounds (280, 160, 112, 96);
    label10->setBounds (8, 200, 80, 24);
    txtCmd->setBounds (96, 200, 48, 24);
    btnCmdAdd->setBounds (352, 16, 40, 24);
    btnCmdDel->setBounds (352, 40, 40, 24);
    optCmdDataFixed->setBounds (160, 352, 71, 24);
    optCmdDataVar->setBounds (160, 376, 72, 24);
    lblCmdDataSize->setBounds (240, 360, 47, 24);
    txtCmdDataSize->setBounds (288, 360, 32, 24);
    label11->setBounds (320, 360, 48, 24);
    label2->setBounds (8, 232, 56, 24);
    cbxAction->setBounds (64, 232, 208, 24);
    label9->setBounds (8, 168, 55, 24);
    txtCmdName->setBounds (64, 168, 208, 24);
    txtCmdEnd->setBounds (176, 200, 48, 24);
    label12->setBounds (152, 200, 23, 24);
    optCmdSeq->setBounds (288, 176, 103, 24);
    optCmdChn->setBounds (288, 200, 104, 24);
    optCmdTrk->setBounds (288, 224, 104, 24);
    label13->setBounds (8, 256, 104, 24);
    btnParamAdd->setBounds (104, 280, 40, 24);
    btnParamDel->setBounds (104, 304, 40, 24);
    btnParamUp->setBounds (104, 416, 40, 24);
    btnParamDn->setBounds (104, 440, 40, 24);
    optCmdOffset->setBounds (160, 328, 160, 24);
    label14->setBounds (160, 304, 224, 24);
    label15->setBounds (160, 400, 72, 24);
    txtParamName->setBounds (216, 280, 166, 24);
    label16->setBounds (160, 280, 55, 24);
    cbxMeaning->setBounds (232, 400, 150, 24);
    label17->setBounds (160, 432, 64, 24);
    label18->setBounds (272, 432, 64, 24);
    txtParamAdd->setBounds (224, 432, 47, 24);
    txtParamMult->setBounds (336, 432, 47, 24);
    btnCmdUp->setBounds (352, 104, 40, 24);
    btnCmdDn->setBounds (352, 128, 40, 24);
    label3->setBounds (416, 40, 168, 24);
    btnSecAdd->setBounds (584, 520, 40, 24);
    btnSecDelete->setBounds (624, 520, 40, 24);
    label4->setBounds (680, 40, 208, 24);
    groupComponent2->setBounds (416, 520, 112, 96);
    optSecSeq->setBounds (424, 536, 104, 24);
    optSecChn->setBounds (424, 560, 104, 24);
    optSecTrk->setBounds (424, 584, 104, 24);
    btnSeqCmdAdd->setBounds (680, 592, 40, 24);
    btnSeqCmdDelete->setBounds (720, 592, 40, 24);
    btnSeqCmdUp->setBounds (808, 592, 40, 24);
    btnSeqCmdDn->setBounds (848, 592, 40, 24);
    label5->setBounds (928, 40, 176, 24);
    cbxSeqCmdType->setBounds (928, 112, 176, 24);
    label6->setBounds (928, 144, 176, 24);
    label7->setBounds (928, 256, 64, 24);
    txtSeqCmdValue->setBounds (1000, 256, 102, 24);
    lblSeqInfo->setBounds (416, 16, 624, 24);
    groupComponent4->setBounds (0, 480, 400, 144);
    lblSeqCmdOutput->setBounds (928, 64, 176, 24);
    label19->setBounds (928, 88, 176, 24);
    lblValueEquiv->setBounds (928, 280, 176, 24);
    btnMIDIExport->setBounds (8, 496, 64, 24);
    btnMIDIImport->setBounds (72, 496, 64, 24);
    label20->setBounds (8, 520, 88, 24);
    txtMIDIBend->setBounds (96, 520, 32, 24);
    label21->setBounds (136, 520, 120, 24);
    txtMIDIPPQN->setBounds (248, 520, 32, 24);
    label22->setBounds (280, 520, 32, 24);
    label23->setBounds (8, 544, 136, 24);
    cbxMIDIChnVol->setBounds (144, 544, 248, 24);
    label24->setBounds (8, 568, 136, 24);
    cbxMIDIMtrVol->setBounds (144, 568, 248, 24);
    label25->setBounds (144, 496, 248, 24);
    label26->setBounds (8, 592, 136, 24);
    cbxChnPriority->setBounds (144, 592, 248, 24);
    //[UserResized] Add your own custom resize handling here..

    lstCommands->setBounds (8, 16, 336, 136);
    lstParameters->setBounds (8, 280, 88, 184);
    lstSeqSections->setBounds (416, 64, 256, 448);
    lstSeqCommands->setBounds (680, 64, 240, 520);
    lstSeqCmdParams->setBounds (928, 168, 176, 80);

    //[/UserResized]
}

void AudioseqPane::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == btnCmdAdd)
    {
        //[UserButtonCode_btnCmdAdd] -- add your button handler code here..
        ValueTree cmdlistnode = p.romdesc.getOrCreateChildWithName("cmdlist", nullptr);
        ValueTree cmd("command");
        cmd.setProperty("cmd", 0, nullptr);
        cmd.setProperty("name", "Unnamed", nullptr);
        cmd.setProperty("action", "No Action", nullptr);
        cmdlistnode.addChild(cmd, cmdlistnode.getNumChildren(), nullptr);
        refreshCmdList();
        lstCommands->selectRow(lsmCommands->getNumRows() - 1);
        //[/UserButtonCode_btnCmdAdd]
    }
    else if (buttonThatWasClicked == btnCmdDel)
    {
        //[UserButtonCode_btnCmdDel] -- add your button handler code here..
        int pos = lstCommands->getLastRowSelected();
        if(pos >= 0){
            p.romdesc.getChildWithName("cmdlist").removeChild(pos, nullptr);
            refreshCmdList();
            lstCommands->selectRow(-1);
        }
        //[/UserButtonCode_btnCmdDel]
    }
    else if (buttonThatWasClicked == optCmdDataFixed)
    {
        //[UserButtonCode_optCmdDataFixed] -- add your button handler code here..
        if(selparam.isValid()){
            selparam.setProperty("datasrc", "fixed", nullptr);
            lblCmdDataSize->setText("length", dontSendNotification);
        }
        //[/UserButtonCode_optCmdDataFixed]
    }
    else if (buttonThatWasClicked == optCmdDataVar)
    {
        //[UserButtonCode_optCmdDataVar] -- add your button handler code here..
        if(selparam.isValid()){
            selparam.setProperty("datasrc", "variable", nullptr);
            lblCmdDataSize->setText("up to", dontSendNotification);
        }
        //[/UserButtonCode_optCmdDataVar]
    }
    else if (buttonThatWasClicked == optCmdSeq)
    {
        //[UserButtonCode_optCmdSeq] -- add your button handler code here..
        if(selcmd.isValid()){
            selcmd.setProperty("validinseq", optCmdSeq->getToggleState(), nullptr);
        }
        //[/UserButtonCode_optCmdSeq]
    }
    else if (buttonThatWasClicked == optCmdChn)
    {
        //[UserButtonCode_optCmdChn] -- add your button handler code here..
        if(selcmd.isValid()){
            selcmd.setProperty("validinchn", optCmdChn->getToggleState(), nullptr);
        }
        //[/UserButtonCode_optCmdChn]
    }
    else if (buttonThatWasClicked == optCmdTrk)
    {
        //[UserButtonCode_optCmdTrk] -- add your button handler code here..
        if(selcmd.isValid()){
            selcmd.setProperty("validintrk", optCmdTrk->getToggleState(), nullptr);
        }
        //[/UserButtonCode_optCmdTrk]
    }
    else if (buttonThatWasClicked == btnParamAdd)
    {
        //[UserButtonCode_btnParamAdd] -- add your button handler code here..
        if(!selcmd.isValid()) return;
        ValueTree paramlistnode = selcmd.getOrCreateChildWithName("paramlist", nullptr);
        ValueTree param("parameter");
        param.setProperty("datasrc", "fixed", nullptr);
        param.setProperty("datalen", 0, nullptr);
        param.setProperty("name", "Unnamed", nullptr);
        param.setProperty("meaning", "None", nullptr);
        param.setProperty("add", 0, nullptr);
        param.setProperty("multiply", 1.0f, nullptr);
        paramlistnode.addChild(param, paramlistnode.getNumChildren(), nullptr);
        refreshParamList();
        lstParameters->selectRow(lsmParameters->getNumRows() - 1);
        //[/UserButtonCode_btnParamAdd]
    }
    else if (buttonThatWasClicked == btnParamDel)
    {
        //[UserButtonCode_btnParamDel] -- add your button handler code here..
        int pos = lstParameters->getLastRowSelected();
        if(pos >= 0){
            selcmd.getChildWithName("paramlist").removeChild(pos, nullptr);
            refreshParamList();
            lstParameters->selectRow(-1);
        }
        //[/UserButtonCode_btnParamDel]
    }
    else if (buttonThatWasClicked == btnParamUp)
    {
        //[UserButtonCode_btnParamUp] -- add your button handler code here..
        int pos = lstParameters->getLastRowSelected();
        if(pos > 0){
            selcmd.getChildWithName("paramlist").moveChild(pos, pos-1, nullptr);
            refreshParamList();
            lstParameters->selectRow(pos-1);
        }
        //[/UserButtonCode_btnParamUp]
    }
    else if (buttonThatWasClicked == btnParamDn)
    {
        //[UserButtonCode_btnParamDn] -- add your button handler code here..
        int pos = lstParameters->getLastRowSelected();
        if(pos >= 0 && pos < lsmParameters->getNumRows() - 1){
            selcmd.getChildWithName("paramlist").moveChild(pos, pos+1, nullptr);
            refreshParamList();
            lstParameters->selectRow(pos+1);
        }
        //[/UserButtonCode_btnParamDn]
    }
    else if (buttonThatWasClicked == optCmdOffset)
    {
        //[UserButtonCode_optCmdOffset] -- add your button handler code here..
        if(selparam.isValid()){
            selparam.setProperty("datasrc", "offset", nullptr);
            txtCmdDataSize->setText("");
            lblCmdDataSize->setText("(none)", dontSendNotification);
        }
        //[/UserButtonCode_optCmdOffset]
    }
    else if (buttonThatWasClicked == btnCmdUp)
    {
        //[UserButtonCode_btnCmdUp] -- add your button handler code here..
        int pos = lstCommands->getLastRowSelected();
        if(pos > 0){
            p.romdesc.getChildWithName("cmdlist").moveChild(pos, pos-1, nullptr);
            refreshCmdList();
            lstCommands->selectRow(pos-1);
        }
        //[/UserButtonCode_btnCmdUp]
    }
    else if (buttonThatWasClicked == btnCmdDn)
    {
        //[UserButtonCode_btnCmdDn] -- add your button handler code here..
        int pos = lstCommands->getLastRowSelected();
        if(pos >= 0 && pos < lsmCommands->getNumRows() - 1){
            p.romdesc.getChildWithName("cmdlist").moveChild(pos, pos+1, nullptr);
            refreshCmdList();
            lstCommands->selectRow(pos+1);
        }
        //[/UserButtonCode_btnCmdDn]
    }
    else if (buttonThatWasClicked == btnSecAdd)
    {
        //[UserButtonCode_btnSecAdd] -- add your button handler code here..
        //[/UserButtonCode_btnSecAdd]
    }
    else if (buttonThatWasClicked == btnSecDelete)
    {
        //[UserButtonCode_btnSecDelete] -- add your button handler code here..
        //[/UserButtonCode_btnSecDelete]
    }
    else if (buttonThatWasClicked == optSecSeq)
    {
        //[UserButtonCode_optSecSeq] -- add your button handler code here..
        //[/UserButtonCode_optSecSeq]
    }
    else if (buttonThatWasClicked == optSecChn)
    {
        //[UserButtonCode_optSecChn] -- add your button handler code here..
        //[/UserButtonCode_optSecChn]
    }
    else if (buttonThatWasClicked == optSecTrk)
    {
        //[UserButtonCode_optSecTrk] -- add your button handler code here..
        //[/UserButtonCode_optSecTrk]
    }
    else if (buttonThatWasClicked == btnSeqCmdAdd)
    {
        //[UserButtonCode_btnSeqCmdAdd] -- add your button handler code here..
        //[/UserButtonCode_btnSeqCmdAdd]
    }
    else if (buttonThatWasClicked == btnSeqCmdDelete)
    {
        //[UserButtonCode_btnSeqCmdDelete] -- add your button handler code here..
        //[/UserButtonCode_btnSeqCmdDelete]
    }
    else if (buttonThatWasClicked == btnSeqCmdUp)
    {
        //[UserButtonCode_btnSeqCmdUp] -- add your button handler code here..
        //[/UserButtonCode_btnSeqCmdUp]
    }
    else if (buttonThatWasClicked == btnSeqCmdDn)
    {
        //[UserButtonCode_btnSeqCmdDn] -- add your button handler code here..
        //[/UserButtonCode_btnSeqCmdDn]
    }
    else if (buttonThatWasClicked == btnMIDIExport)
    {
        //[UserButtonCode_btnMIDIExport] -- add your button handler code here..
        if(&*p.seq == nullptr) return;
        ScopedPointer<MidiFile> midi;
        midi = p.seq->toMIDIFile();
		File dest = File::getSpecialLocation(File::userHomeDirectory);
		dest = dest.getChildFile("haxxorz.mid");
        FileChooser box("Save As", dest, "*.mid");
        if(!box.browseForFileToSave(true)) return;
        dest = box.getResult();
        if(!dest.hasWriteAccess()){
            DBG("Cannot write to " + dest.getFullPathName() + "!");
            return;
        }
        if(dest.getFileExtension() == ""){
            dest = dest.withFileExtension(".mid");
        }
        if(dest.exists()){
            dest.deleteFile();
        }
        FileOutputStream fos(dest);
        midi->writeTo(fos);
        DBG("Written!!!!");
        //[/UserButtonCode_btnMIDIExport]
    }
    else if (buttonThatWasClicked == btnMIDIImport)
    {
        //[UserButtonCode_btnMIDIImport] -- add your button handler code here..
        //[/UserButtonCode_btnMIDIImport]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void AudioseqPane::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == cbxAction)
    {
        //[UserComboBoxCode_cbxAction] -- add your combo box handling code here..
        if(selcmd.isValid()){
            String action = cbxAction->getText();
            selcmd.setProperty("action", action, nullptr);
            fillMeaningsBox(action);
            lsmCommands->set(lstCommands->getLastRowSelected(), getCommandDesc(selcmd));
            lstCommands->repaintRow(lstCommands->getLastRowSelected());
        }
        //[/UserComboBoxCode_cbxAction]
    }
    else if (comboBoxThatHasChanged == cbxMeaning)
    {
        //[UserComboBoxCode_cbxMeaning] -- add your combo box handling code here..
        if(selparam.isValid()){
            String meaning = cbxMeaning->getText();
            selparam.setProperty("meaning", meaning, nullptr);
        }
        //[/UserComboBoxCode_cbxMeaning]
    }
    else if (comboBoxThatHasChanged == cbxSeqCmdType)
    {
        //[UserComboBoxCode_cbxSeqCmdType] -- add your combo box handling code here..
        //[/UserComboBoxCode_cbxSeqCmdType]
    }
    else if (comboBoxThatHasChanged == cbxMIDIChnVol)
    {
        //[UserComboBoxCode_cbxMIDIChnVol] -- add your combo box handling code here..
        ValueTree cmdlistnode = p.romdesc.getOrCreateChildWithName("cmdlist", nullptr);
        cmdlistnode.setProperty("chnvol", cbxMIDIChnVol->getText(), nullptr);
        //[/UserComboBoxCode_cbxMIDIChnVol]
    }
    else if (comboBoxThatHasChanged == cbxMIDIMtrVol)
    {
        //[UserComboBoxCode_cbxMIDIMtrVol] -- add your combo box handling code here..
        ValueTree cmdlistnode = p.romdesc.getOrCreateChildWithName("cmdlist", nullptr);
        cmdlistnode.setProperty("mtrvol", cbxMIDIMtrVol->getText(), nullptr);
        //[/UserComboBoxCode_cbxMIDIMtrVol]
    }
    else if (comboBoxThatHasChanged == cbxChnPriority)
    {
        //[UserComboBoxCode_cbxChnPriority] -- add your combo box handling code here..
        ValueTree cmdlistnode = p.romdesc.getOrCreateChildWithName("cmdlist", nullptr);
        cmdlistnode.setProperty("chnpriority", cbxChnPriority->getText(), nullptr);
        //[/UserComboBoxCode_cbxChnPriority]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void AudioseqPane::visibilityChanged()
{
    //[UserCode_visibilityChanged] -- Add your code here...
    //[/UserCode_visibilityChanged]
}

void AudioseqPane::broughtToFront()
{
    //[UserCode_broughtToFront] -- Add your code here...
    //fillSeqSections();
    //[/UserCode_broughtToFront]
}

void AudioseqPane::focusGained (FocusChangeType cause)
{
    //[UserCode_focusGained] -- Add your code here...
    //fillSeqSections();
    //[/UserCode_focusGained]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void AudioseqPane::rowSelected(TextListModel* parent, int row){
    if(parent == &*lsmCommands){
        ValueTree cmdlistnode = p.romdesc.getOrCreateChildWithName("cmdlist", nullptr);
        selcmd = cmdlistnode.getChild(row);
        refreshCmdControls();
    }else if(parent == &*lsmParameters){
        ValueTree paramlistnode = selcmd.getOrCreateChildWithName("paramlist", nullptr);
        selparam = paramlistnode.getChild(row);
        refreshParamControls();
    }else if(parent == &*lsmSeqSections){
        fillSeqCommands();
    }else if(parent == &*lsmSeqCommands){
        refreshSeqCmdControls();
    }
}

void AudioseqPane::textEditorTextChanged(TextEditor& editorThatWasChanged){
    int val;
    String text = editorThatWasChanged.getText();
    if(&editorThatWasChanged == &*txtParamAdd
            || &editorThatWasChanged == &*txtCmdDataSize
            || &editorThatWasChanged == &*txtMIDIBend
            || &editorThatWasChanged == &*txtMIDIPPQN ){
        val = text.getIntValue();
    }else{
        val = text.getHexValue32();
    }
    bool turnRed = (val <= 0);
    bool redrawCmdItem = false;

    if(&editorThatWasChanged == &*txtCmdName){
        if(!selcmd.isValid()) return;
        selcmd.setProperty("name", text, nullptr);
        turnRed = false;
        redrawCmdItem = true;
    }else if(&editorThatWasChanged == &*txtCmd){
        if(!selcmd.isValid()) return;
        selcmd.setProperty("cmd", val, nullptr);
        redrawCmdItem = true;
    }else if(&editorThatWasChanged == &*txtCmdEnd){
        if(!selcmd.isValid()) return;
        if(text != ""){
            selcmd.setProperty("cmdend", val, nullptr);
            if(val < (int)selcmd.getProperty("cmd", 0xFF)){
                turnRed = true;
            }
        }else{
            selcmd.removeProperty("cmdend", nullptr);
            turnRed = false;
        }
        redrawCmdItem = true;
    }else if(&editorThatWasChanged == &*txtParamName){
        if(!selparam.isValid()) return;
        selparam.setProperty("name", text, nullptr);
        turnRed = false;
    }else if(&editorThatWasChanged == &*txtParamAdd){
        if(!selparam.isValid()) return;
        selparam.setProperty("add", val, nullptr);
        turnRed = false;
    }else if(&editorThatWasChanged == &*txtParamMult){
        if(!selparam.isValid()) return;
        float v = text.getFloatValue();
        if(v <= 0.0f) v = 1.0f;
        selparam.setProperty("multiply", v, nullptr);
        turnRed = false;
    }else if(&editorThatWasChanged == &*txtCmdDataSize){
        if(!selparam.isValid()) return;
        if(val < 0) val = 0;
        selparam.setProperty("datalen", val, nullptr);
        turnRed = false;
    }else if(&editorThatWasChanged == &*txtMIDIBend){
        ValueTree cmdlistnode = p.romdesc.getOrCreateChildWithName("cmdlist", nullptr);
        cmdlistnode.setProperty("bendrange", val, nullptr);
    }else if(&editorThatWasChanged == &*txtMIDIPPQN){
        ValueTree cmdlistnode = p.romdesc.getOrCreateChildWithName("cmdlist", nullptr);
        if(val <= 0) val = 1;
        cmdlistnode.setProperty("ppqnmultiplier", val, nullptr);
    }
    if(turnRed){
        editorThatWasChanged.setColour(TextEditor::backgroundColourId, Colours::red);
    }else{
        editorThatWasChanged.setColour(TextEditor::backgroundColourId, Colours::white);
    }
    if(redrawCmdItem){
        lsmCommands->set(lstCommands->getLastRowSelected(), getCommandDesc(selcmd));
        lstCommands->repaintRow(lstCommands->getLastRowSelected());
    }

}


void AudioseqPane::refreshCmdControls(){
    if(selcmd.isValid()){
        txtCmdName->setText(selcmd.getProperty("name", "Error!").toString());
        txtCmd->setText(ROM::hex((uint8)(int)selcmd.getProperty("cmd", 0)));
        if(selcmd.hasProperty("cmdend")){
            txtCmdEnd->setText(ROM::hex((uint8)(int)selcmd.getProperty("cmdend", 0)));
        }else{
            txtCmdEnd->setText("");
        }
        optCmdSeq->setToggleState((bool)selcmd.getProperty("validinseq", false), dontSendNotification);
        optCmdChn->setToggleState((bool)selcmd.getProperty("validinchn", false), dontSendNotification);
        optCmdTrk->setToggleState((bool)selcmd.getProperty("validintrk", false), dontSendNotification);
        String action = selcmd.getProperty("action", "No Action").toString();
        cbxAction->setText(action);
        fillMeaningsBox(action);
    }else{
        txtCmdName->setText("");
        txtCmd->setText("");
        txtCmdEnd->setText("");
        optCmdSeq->setToggleState(false, dontSendNotification);
        optCmdChn->setToggleState(false, dontSendNotification);
        optCmdTrk->setToggleState(false, dontSendNotification);
        cbxAction->setText("No Action");
        fillMeaningsBox("No Action");
        refreshParamList();
        lstParameters->selectRow(0);
    }
    refreshParamList();
}

void AudioseqPane::refreshParamControls(){
    if(selparam.isValid()){
        String src = selparam.getProperty("datasrc", "fixed").toString();
        if(src == "variable"){
            optCmdDataVar->setToggleState(true, dontSendNotification);
            txtCmdDataSize->setText(String((int)selparam.getProperty("datalen", 0)));
            lblCmdDataSize->setText("up to", dontSendNotification);
        }else if(src == "offset"){
            optCmdOffset->setToggleState(true, dontSendNotification);
            txtCmdDataSize->setText("");
            lblCmdDataSize->setText("(none)", dontSendNotification);
        }else{
            optCmdDataFixed->setToggleState(true, dontSendNotification);
            txtCmdDataSize->setText(String((int)selparam.getProperty("datalen", 0)));
            lblCmdDataSize->setText("length", dontSendNotification);
        }
        txtParamName->setText(selparam.getProperty("name", "Unnamed").toString());
        cbxMeaning->setText(selparam.getProperty("meaning", "None").toString());
        txtParamAdd->setText(String((int)selparam.getProperty("add", 0)));
        txtParamMult->setText(String((float)selparam.getProperty("multiply", 1.0f)));
    }else{
        optCmdDataFixed->setToggleState(true, dontSendNotification);
        txtCmdDataSize->setText("0");
        lblCmdDataSize->setText("length", dontSendNotification);
        txtParamName->setText("");
        cbxMeaning->setText("None");
        txtParamAdd->setText("0");
        txtParamMult->setText("1");
    }
}

void AudioseqPane::refreshCmdList(){
    lsmCommands->clear();
    ValueTree cmdlistnode = p.romdesc.getOrCreateChildWithName("cmdlist", nullptr);
    ValueTree cmd;
    String desc;
    for(int i=0; i<cmdlistnode.getNumChildren(); i++){
        cmd = cmdlistnode.getChild(i);
        if(cmd.getType() == Identifier("command")){
            lsmCommands->add(getCommandDesc(cmd));
        }
    }
    lstCommands->updateContent();
}
void AudioseqPane::refreshParamList(){
    lsmParameters->clear();
    lstParameters->updateContent();
    if(selcmd.isValid()){
        ValueTree paramlistnode = selcmd.getOrCreateChildWithName("paramlist", nullptr);
        ValueTree param;
        for(int i=0; i<paramlistnode.getNumChildren(); i++){
            param = paramlistnode.getChild(i);
            if(param.getType() == Identifier("parameter")){
                lsmParameters->add(String(i));
            }
        }
    }
    lstParameters->updateContent();
}

String AudioseqPane::getCommandDesc(ValueTree cmd){
    String desc = ROM::hex((uint8)(int)cmd.getProperty("cmd", 0));
    if(cmd.hasProperty("cmdend")){
        desc += " to " + ROM::hex((uint8)(int)cmd.getProperty("cmdend", 0));
    }
    desc += ": " + cmd.getProperty("name").toString();
    desc += " (" + cmd.getProperty("action").toString() + ")";
    return desc;
}


void AudioseqPane::fillMeaningsBox(String action){
    cbxMeaning->clear(dontSendNotification);
    cbxMeaning->addItem("None", cbxMeaning->getNumItems()+1);
    cbxMeaning->addItem("Pre-Delay", cbxMeaning->getNumItems()+1);
    cbxMeaning->addItem("Post-Delay", cbxMeaning->getNumItems()+1);
    if(action == "No Action"){
        //None
    }else if(action == "End of Data"){
        //None
    }else if(action == "Timestamp"){
        //None--use Pre-Delay or Post-Delay
    }else if(action == "Ptr Channel Header"){
        cbxMeaning->addItem("Channel", cbxMeaning->getNumItems()+1);
        cbxMeaning->addItem("Address", cbxMeaning->getNumItems()+1);
    }else if(action == "Ptr Loop Start"){
        cbxMeaning->addItem("Address", cbxMeaning->getNumItems()+1);
    }else if(action == "Ptr Track Data"){
        cbxMeaning->addItem("Note Layer", cbxMeaning->getNumItems()+1);
        cbxMeaning->addItem("Address", cbxMeaning->getNumItems()+1);
    }else if(action == "Ptr More Track Data"){
        cbxMeaning->addItem("Address", cbxMeaning->getNumItems()+1);
    }else if(action == "Master Volume"){
        cbxMeaning->addItem("Value", cbxMeaning->getNumItems()+1);
    }else if(action == "Tempo"){
        cbxMeaning->addItem("Value", cbxMeaning->getNumItems()+1);
    }else if(action == "Chn Priority"){
        cbxMeaning->addItem("Channel", cbxMeaning->getNumItems()+1);
        cbxMeaning->addItem("Value", cbxMeaning->getNumItems()+1);
    }else if(action == "Chn Volume"){
        cbxMeaning->addItem("Channel", cbxMeaning->getNumItems()+1);
        cbxMeaning->addItem("Value", cbxMeaning->getNumItems()+1);
    }else if(action == "Chn Pan"){
        cbxMeaning->addItem("Channel", cbxMeaning->getNumItems()+1);
        cbxMeaning->addItem("Value", cbxMeaning->getNumItems()+1);
    }else if(action == "Chn Effects"){
        cbxMeaning->addItem("Channel", cbxMeaning->getNumItems()+1);
        cbxMeaning->addItem("Value", cbxMeaning->getNumItems()+1);
    }else if(action == "Chn Vibrato"){
        cbxMeaning->addItem("Channel", cbxMeaning->getNumItems()+1);
        cbxMeaning->addItem("Value", cbxMeaning->getNumItems()+1);
    }else if(action == "Chn Pitch Bend"){
        cbxMeaning->addItem("Channel", cbxMeaning->getNumItems()+1);
        cbxMeaning->addItem("Value", cbxMeaning->getNumItems()+1);
    }else if(action == "Chn Transpose"){
        cbxMeaning->addItem("Channel", cbxMeaning->getNumItems()+1);
        cbxMeaning->addItem("Value", cbxMeaning->getNumItems()+1);
    }else if(action == "Layer Transpose"){
        cbxMeaning->addItem("Channel", cbxMeaning->getNumItems()+1);
        cbxMeaning->addItem("Value", cbxMeaning->getNumItems()+1);
    }else if(action == "Chn Instrument"){
        cbxMeaning->addItem("Channel", cbxMeaning->getNumItems()+1);
        cbxMeaning->addItem("Value", cbxMeaning->getNumItems()+1);
    }else if(action == "Track Note"){
        cbxMeaning->addItem("Note Layer", cbxMeaning->getNumItems()+1);
        cbxMeaning->addItem("Note", cbxMeaning->getNumItems()+1);
        cbxMeaning->addItem("Velocity", cbxMeaning->getNumItems()+1);
        cbxMeaning->addItem("Gate Time", cbxMeaning->getNumItems()+1);
    }else{
        cbxMeaning->clear(dontSendNotification);
        cbxMeaning->addItem("ERROR fillMeaningsBox", cbxMeaning->getNumItems()+1);
    }
    cbxMeaning->setSelectedItemIndex(0, dontSendNotification);
}

void AudioseqPane::fillSeqSections(){
    if(&*p.seq == nullptr) return;
    lsmSeqSections->clear();
    for(int s=0; s<p.seq->getNumSections(); s++){
        lsmSeqSections->add(p.seq->getSectionDescription(s));
    }
    String seqinfo = "Sequence ";
    if(p.seq->name != ""){
        seqinfo += "\"" + p.seq->name + "\"";
    }
    seqinfo += ": ";
    if(p.seq->getStartAddr() > 0){
        seqinfo += "@" + ROM::hex(p.seq->getStartAddr()) + ", ";
    }
    seqinfo += "length " + ROM::hex(p.seq->getLength(), 4);
    seqinfo += " (" + String(p.seq->getNumSections()) + " sections)";
    lblSeqInfo->setText(seqinfo, dontSendNotification);
    lstSeqSections->updateContent();
}

void AudioseqPane::fillSeqCommands(){
    lsmSeqCommands->clear();
    lstSeqCommands->updateContent();
    if(&*p.seq == nullptr) return;
    int selsec = lstSeqSections->getLastRowSelected();
    if(selsec < 0 || selsec >= p.seq->getNumSections()) return;
    SeqData* section = p.seq->getSection(selsec);
    int stype = section->stype;
    uint32 a;
    ValueTree cmd;
    String str;
    for(int c=0; c<section->cmdoffsets.size(); c++){
        a = section->cmdoffsets[c];
        cmd = p.seq->getCommand(a, stype);
        str = "@" + ROM::hex(a, 4) + ": ";
        str += ROM::hex(p.seq->readByte(a)) + " ";
        str += cmd.getProperty("name", "[Unknown Cmd]").toString();
        lsmSeqCommands->add(str);
    }
    lstSeqCommands->updateContent();
}

void AudioseqPane::refreshMIDIControls(){
    ValueTree cmdlistnode = p.romdesc.getOrCreateChildWithName("cmdlist", nullptr);
    txtMIDIBend->setText(cmdlistnode.getProperty("bendrange", 2).toString());
    txtMIDIPPQN->setText(cmdlistnode.getProperty("ppqnmultiplier", 1).toString());
    cbxMIDIChnVol->setText(cmdlistnode.getProperty("chnvol", "CC7 (Volume)").toString());
    cbxMIDIMtrVol->setText(cmdlistnode.getProperty("mtrvol", "CC24 (None)").toString());
    cbxChnPriority->setText(cmdlistnode.getProperty("chnpriority", "CC25 (None)").toString());
}

void AudioseqPane::refreshSeqCmdControls(){
    int selsec = lstSeqSections->getLastRowSelected();
    if(selsec < 0 || selsec >= p.seq->getNumSections()) return;
    SeqData* section = p.seq->getSection(selsec);
    int selcmd = lstSeqCommands->getLastRowSelected();
    if(selcmd < 0 || selcmd >= section->cmdoffsets.size()) return;
    uint32 cmdaddr = section->cmdoffsets[selcmd];
    String cmddatatext;
    ValueTree cmd = p.seq->getCommand(cmdaddr, section->stype);
    int cmdlen = cmd.getProperty("length", 1);
    for(int i=0; i<cmdlen; i++){
        cmddatatext += ROM::hex(p.seq->readByte(cmdaddr+i)) + " ";
    }
    lblSeqCmdOutput->setText(cmddatatext, dontSendNotification);
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="AudioseqPane" componentName=""
                 parentClasses="public Component, public TextEditor::Listener, public TextListModel::Listener"
                 constructorParams="AppProps&amp; props" variableInitialisers="p(props)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="1000" initialHeight="632">
  <METHODS>
    <METHOD name="focusGained (FocusChangeType cause)"/>
    <METHOD name="visibilityChanged()"/>
    <METHOD name="broughtToFront()"/>
  </METHODS>
  <BACKGROUND backgroundColour="ffffffff"/>
  <GROUPCOMPONENT name="new group" id="b3355c52e381c7e5" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="408 0 704 624" title="Loaded Sequence"/>
  <GROUPCOMPONENT name="new group" id="f1d4a599b3267719" memberName="groupComponent3"
                  virtualName="" explicitFocusOrder="0" pos="0 0 400 480" title="Command Editor"/>
  <GROUPCOMPONENT name="new group" id="977c50d4ba0f1784" memberName="groupComponent6"
                  virtualName="" explicitFocusOrder="0" pos="152 264 240 208" title="Edit Parameter"/>
  <GROUPCOMPONENT name="new group" id="b9f9c4c5353e7b92" memberName="groupComponent5"
                  virtualName="" explicitFocusOrder="0" pos="280 160 112 96" title="Valid in"/>
  <LABEL name="new label" id="120e7da910b9fa36" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="8 200 80 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Command:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="c17bf80cbae3b9bf" memberName="txtCmd"
              virtualName="" explicitFocusOrder="0" pos="96 200 48 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTBUTTON name="new button" id="33646eda08c514f8" memberName="btnCmdAdd"
              virtualName="" explicitFocusOrder="0" pos="352 16 40 24" buttonText="Add"
              connectedEdges="8" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="4ad518eab3cf4e38" memberName="btnCmdDel"
              virtualName="" explicitFocusOrder="0" pos="352 40 40 24" buttonText="Del"
              connectedEdges="4" needsCallback="1" radioGroupId="0"/>
  <TOGGLEBUTTON name="new toggle button" id="de7cafa15549ae99" memberName="optCmdDataFixed"
                virtualName="" explicitFocusOrder="0" pos="160 352 71 24" buttonText="Fixed"
                connectedEdges="0" needsCallback="1" radioGroupId="1" state="1"/>
  <TOGGLEBUTTON name="new toggle button" id="1ac143856715712c" memberName="optCmdDataVar"
                virtualName="" explicitFocusOrder="0" pos="160 376 72 24" buttonText="Variable"
                connectedEdges="0" needsCallback="1" radioGroupId="1" state="0"/>
  <LABEL name="new label" id="5ef4448d8600da02" memberName="lblCmdDataSize"
         virtualName="" explicitFocusOrder="0" pos="240 360 47 24" edTextCol="ff000000"
         edBkgCol="0" labelText="length" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="txtCmdDat" id="6db88ac89d3dcd1d" memberName="txtCmdDataSize"
              virtualName="" explicitFocusOrder="0" pos="288 360 32 24" initialText="1"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="63098370e332d46f" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="320 360 48 24" edTextCol="ff000000"
         edBkgCol="0" labelText="(dec)" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="1260a931f1b77e50" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="8 232 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Action:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <COMBOBOX name="Action" id="4cabd0b9e2965ff5" memberName="cbxAction" virtualName=""
            explicitFocusOrder="0" pos="64 232 208 24" editable="0" layout="33"
            items="No Action&#10;End of Data&#10;Timestamp&#10;Ptr Channel Header&#10;Ptr Loop Start&#10;Ptr Track Data&#10;Ptr More Track Data&#10;Master Volume&#10;Tempo&#10;Chn Priority&#10;Chn Volume&#10;Chn Pan&#10;Chn Effects&#10;Chn Vibrato&#10;Chn Pitch Bend&#10;Chn Instrument&#10;Chn Transpose&#10;Layer Transpose&#10;Track Note"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="6d034f22b803ef0c" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="8 168 55 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Name:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="17aae1e70c35fd59" memberName="txtCmdName"
              virtualName="" explicitFocusOrder="0" pos="64 168 208 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="new text editor" id="391e87c7412baa15" memberName="txtCmdEnd"
              virtualName="" explicitFocusOrder="0" pos="176 200 48 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="2dce25261c0a7641" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="152 200 23 24" edTextCol="ff000000"
         edBkgCol="0" labelText="to" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="new toggle button" id="6760f7dd9298e144" memberName="optCmdSeq"
                virtualName="" explicitFocusOrder="0" pos="288 176 103 24" buttonText="Seq header"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="e198702d72e71f55" memberName="optCmdChn"
                virtualName="" explicitFocusOrder="0" pos="288 200 104 24" buttonText="Chn header"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="d079eea3af0c26a4" memberName="optCmdTrk"
                virtualName="" explicitFocusOrder="0" pos="288 224 104 24" buttonText="Track data"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <LABEL name="new label" id="5666e65f925f98ec" memberName="label13" virtualName=""
         explicitFocusOrder="0" pos="8 256 104 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Parameters:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="972d79b803f377c4" memberName="btnParamAdd"
              virtualName="" explicitFocusOrder="0" pos="104 280 40 24" buttonText="Add"
              connectedEdges="8" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="1ba257bf64ce7e89" memberName="btnParamDel"
              virtualName="" explicitFocusOrder="0" pos="104 304 40 24" buttonText="Del"
              connectedEdges="4" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="2f3dd0a3ebcb78d5" memberName="btnParamUp"
              virtualName="" explicitFocusOrder="0" pos="104 416 40 24" buttonText="Up"
              connectedEdges="8" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="cee83a628d87bd1a" memberName="btnParamDn"
              virtualName="" explicitFocusOrder="0" pos="104 440 40 24" buttonText="Dn"
              connectedEdges="4" needsCallback="1" radioGroupId="0"/>
  <TOGGLEBUTTON name="new toggle button" id="3134f7ae28bcfdd3" memberName="optCmdOffset"
                virtualName="" explicitFocusOrder="0" pos="160 328 160 24" buttonText="Cmd Offset (no data)"
                connectedEdges="0" needsCallback="1" radioGroupId="1" state="0"/>
  <LABEL name="new label" id="9da40dae5b71c4cf" memberName="label14" virtualName=""
         explicitFocusOrder="0" pos="160 304 224 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Data source:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="eed9a48d3bb5e03b" memberName="label15" virtualName=""
         explicitFocusOrder="0" pos="160 400 72 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Meaning:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="b867bd3ceb8e1203" memberName="txtParamName"
              virtualName="" explicitFocusOrder="0" pos="216 280 166 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="8306c58890811511" memberName="label16" virtualName=""
         explicitFocusOrder="0" pos="160 280 55 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Name:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <COMBOBOX name="Meaning" id="5955524ab0ec02c1" memberName="cbxMeaning"
            virtualName="" explicitFocusOrder="0" pos="232 400 150 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="8d5abd7e709bfe4f" memberName="label17" virtualName=""
         explicitFocusOrder="0" pos="160 432 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Add (dec):" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="9a94c821168285dc" memberName="label18" virtualName=""
         explicitFocusOrder="0" pos="272 432 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Multiply:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="d44ee99ec4017196" memberName="txtParamAdd"
              virtualName="" explicitFocusOrder="0" pos="224 432 47 24" initialText="0"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="new text editor" id="9adbc3822f7d0ac1" memberName="txtParamMult"
              virtualName="" explicitFocusOrder="0" pos="336 432 47 24" initialText="1.0"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTBUTTON name="new button" id="5c1f23230407fcb1" memberName="btnCmdUp"
              virtualName="" explicitFocusOrder="0" pos="352 104 40 24" buttonText="Up"
              connectedEdges="8" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="98d71ec28a9ccb5f" memberName="btnCmdDn"
              virtualName="" explicitFocusOrder="0" pos="352 128 40 24" buttonText="Dn"
              connectedEdges="4" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="cfb894eaf50ddd48" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="416 40 168 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Sections:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="c789dcd2d2b3c378" memberName="btnSecAdd"
              virtualName="" explicitFocusOrder="0" pos="584 520 40 24" buttonText="Add"
              connectedEdges="2" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="96bc5049f672ad9d" memberName="btnSecDelete"
              virtualName="" explicitFocusOrder="0" pos="624 520 40 24" buttonText="Del"
              connectedEdges="1" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="eafcae42c6686b48" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="680 40 208 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Commands:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <GROUPCOMPONENT name="new group" id="547867053e33081" memberName="groupComponent2"
                  virtualName="" explicitFocusOrder="0" pos="416 520 112 96" title="Interpret As"/>
  <TOGGLEBUTTON name="new toggle button" id="cf47b7f68371eb95" memberName="optSecSeq"
                virtualName="" explicitFocusOrder="0" pos="424 536 104 24" buttonText="Seq header"
                connectedEdges="0" needsCallback="1" radioGroupId="2" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="a6c764d49706b110" memberName="optSecChn"
                virtualName="" explicitFocusOrder="0" pos="424 560 104 24" buttonText="Chn header"
                connectedEdges="0" needsCallback="1" radioGroupId="2" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="653c215535bfa70a" memberName="optSecTrk"
                virtualName="" explicitFocusOrder="0" pos="424 584 104 24" buttonText="Track data"
                connectedEdges="0" needsCallback="1" radioGroupId="2" state="0"/>
  <TEXTBUTTON name="new button" id="cf3f95690aa55b7c" memberName="btnSeqCmdAdd"
              virtualName="" explicitFocusOrder="0" pos="680 592 40 24" buttonText="Add"
              connectedEdges="2" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="9661fb86a4ef0a7c" memberName="btnSeqCmdDelete"
              virtualName="" explicitFocusOrder="0" pos="720 592 40 24" buttonText="Del"
              connectedEdges="1" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="322ab17ff1c48b0f" memberName="btnSeqCmdUp"
              virtualName="" explicitFocusOrder="0" pos="808 592 40 24" buttonText="Up"
              connectedEdges="2" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="24ae8e838a4add93" memberName="btnSeqCmdDn"
              virtualName="" explicitFocusOrder="0" pos="848 592 40 24" buttonText="Dn"
              connectedEdges="1" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="85fc50c21a943214" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="928 40 176 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Command:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <COMBOBOX name="new combo box" id="91d638859dfe0501" memberName="cbxSeqCmdType"
            virtualName="" explicitFocusOrder="0" pos="928 112 176 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="e4221a19f7c8c34b" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="928 144 176 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Parameters:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="1ef07cd6fece0549" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="928 256 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Value:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="28b2ef3b6fe44f9a" memberName="txtSeqCmdValue"
              virtualName="" explicitFocusOrder="0" pos="1000 256 102 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="a69b237684dc0a0d" memberName="lblSeqInfo"
         virtualName="" explicitFocusOrder="0" pos="416 16 624 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Sequence information" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <GROUPCOMPONENT name="new group" id="5a1a54c8f2b8a402" memberName="groupComponent4"
                  virtualName="" explicitFocusOrder="0" pos="0 480 400 144" title="MIDI File"/>
  <LABEL name="new label" id="b4433a8f5fa23479" memberName="lblSeqCmdOutput"
         virtualName="" explicitFocusOrder="0" pos="928 64 176 24" edTextCol="ff000000"
         edBkgCol="0" labelText="[actual command]" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="4b6f4c5b150b8e9" memberName="label19" virtualName=""
         explicitFocusOrder="0" pos="928 88 176 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Type:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="44ea1cfa0e02c008" memberName="lblValueEquiv"
         virtualName="" explicitFocusOrder="0" pos="928 280 176 24" edTextCol="ff000000"
         edBkgCol="0" labelText="[dec, note equiv.]" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="3fc9249f7191079e" memberName="btnMIDIExport"
              virtualName="" explicitFocusOrder="0" pos="8 496 64 24" buttonText="Export"
              connectedEdges="2" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="deb9b771019f9555" memberName="btnMIDIImport"
              virtualName="" explicitFocusOrder="0" pos="72 496 64 24" buttonText="Import"
              connectedEdges="1" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="7ee4df75e04ec993" memberName="label20" virtualName=""
         explicitFocusOrder="0" pos="8 520 88 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Bend range:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="f6f8b6c6346a1954" memberName="txtMIDIBend"
              virtualName="" explicitFocusOrder="0" pos="96 520 32 24" initialText="4"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="678cb1b34534af2f" memberName="label21" virtualName=""
         explicitFocusOrder="0" pos="136 520 120 24" edTextCol="ff000000"
         edBkgCol="0" labelText="PPQN multiplier:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="99b9654ebd18dc1e" memberName="txtMIDIPPQN"
              virtualName="" explicitFocusOrder="0" pos="248 520 32 24" initialText="2"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="a7e744044efc1585" memberName="label22" virtualName=""
         explicitFocusOrder="0" pos="280 520 32 24" edTextCol="ff000000"
         edBkgCol="0" labelText="x48" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="695e3a0f276fa4e0" memberName="label23" virtualName=""
         explicitFocusOrder="0" pos="8 544 136 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Chn volume to:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="new combo box" id="d119e693727236bb" memberName="cbxMIDIChnVol"
            virtualName="" explicitFocusOrder="0" pos="144 544 248 24" editable="0"
            layout="33" items="CC7 (Volume)&#10;CC11 (Expr)" textWhenNonSelected="ERROR"
            textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="1dea77f54e15ecb7" memberName="label24" virtualName=""
         explicitFocusOrder="0" pos="8 568 136 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Master volume to:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="new combo box" id="21e08ae5ec6adcb7" memberName="cbxMIDIMtrVol"
            virtualName="" explicitFocusOrder="0" pos="144 568 248 24" editable="0"
            layout="33" items="CC7 (Volume)&#10;CC11 (Expr)&#10;CC16 (GPC1)&#10;CC24 (None)&#10;SysEx MstrVol"
            textWhenNonSelected="ERROR" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="ec20b0951fd4e63e" memberName="label25" virtualName=""
         explicitFocusOrder="0" pos="144 496 248 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Uses Audiobank information" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="494496a2e6f332ab" memberName="label26" virtualName=""
         explicitFocusOrder="0" pos="8 592 136 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Chn priority to:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="new combo box" id="7007be4d513e8e1c" memberName="cbxChnPriority"
            virtualName="" explicitFocusOrder="0" pos="144 592 248 24" editable="0"
            layout="33" items="CC17 (GPC2)&#10;CC25 (None)&#10;CC79 (SC10)"
            textWhenNonSelected="ERROR" textWhenNoItems="(no choices)"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
