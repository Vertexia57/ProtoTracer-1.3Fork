#pragma once

#include "IvyProject.h"
#include "Assets\Models\OBJ\DeltaDisplayBackground.h"
//#include "Assets\Models\FBX\NukudeFlat.h"
#include "Assets\Models\FBX\IvyProtoFBX.h"

#include "Camera\CameraManager\Implementations\HUB75DeltaCameras.h"
#include "Controller\HUB75Controller.h"

class IvyProto : public ProtogenProject {
private:
    HUB75DeltaCameraManager cameras;
    HUB75Controller controller = HUB75Controller(&cameras, 50, 50);
    IvyProtoFBX protoModel;
    DeltaDisplayBackground deltaDisplayBackground;
    
	const __FlashStringHelper* faceArray[10] = {F("DEFAULT"), F("ANGRY"), F("DOUBT"), F("FROWN"), F("LOOKUP"), F("SAD"), F("AUDIO1"), F("AUDIO2"), F("AUDIO3")};

    void LinkControlParameters() override {//Called from parent


        /* NUKUDE PROTOGEN, USE AS REFERENCE
        AddParameter(NukudeFace::Anger, protoModel.GetMorphWeightReference(NukudeFace::Anger), 15);
        AddParameter(NukudeFace::Sadness, protoModel.GetMorphWeightReference(NukudeFace::Sadness), 15, IEasyEaseAnimator::InterpolationMethod::Cosine);
        AddParameter(NukudeFace::Surprised, protoModel.GetMorphWeightReference(NukudeFace::Surprised), 15);
        AddParameter(NukudeFace::Doubt, protoModel.GetMorphWeightReference(NukudeFace::Doubt), 15);
        AddParameter(NukudeFace::Frown, protoModel.GetMorphWeightReference(NukudeFace::Frown), 15);
        AddParameter(NukudeFace::LookUp, protoModel.GetMorphWeightReference(NukudeFace::LookUp), 15);
        AddParameter(NukudeFace::LookDown, protoModel.GetMorphWeightReference(NukudeFace::LookDown), 15);

        AddParameter(NukudeFace::HideBlush, protoModel.GetMorphWeightReference(NukudeFace::HideBlush), 15, IEasyEaseAnimator::InterpolationMethod::Cosine, true);
        AddParameter(NukudeFace::EyeLashes, protoModel.GetMorphWeightReference(NukudeFace::EyeLashes), 15, IEasyEaseAnimator::InterpolationMethod::Cosine, true);


        AddBlinkParameter(protoModel.GetMorphWeightReference(NukudeFace::Blink));
        */

        AddParameter(IvyProtoFBX::Angry, protoModel.GetMorphWeightReference(IvyProtoFBX::Angry), 15);
        AddParameter(IvyProtoFBX::Happy, protoModel.GetMorphWeightReference(IvyProtoFBX::Happy), 15);
        AddParameter(IvyProtoFBX::Frown, protoModel.GetMorphWeightReference(IvyProtoFBX::Frown), 15);
        AddParameter(IvyProtoFBX::SadEyes, protoModel.GetMorphWeightReference(IvyProtoFBX::SadEyes), 15, IEasyEaseAnimator::InterpolationMethod::Cosine);
        AddParameter(IvyProtoFBX::Ehheh, protoModel.GetMorphWeightReference(IvyProtoFBX::Ehheh), 15);

        AddParameter(IvyProtoFBX::HideBlush, protoModel.GetMorphWeightReference(IvyProtoFBX::HideBlush), 15, IEasyEaseAnimator::InterpolationMethod::Cosine, false);
        AddParameter(IvyProtoFBX::HideCrossEyes, protoModel.GetMorphWeightReference(IvyProtoFBX::HideCrossEyes), 15, IEasyEaseAnimator::InterpolationMethod::Cosine, true);
        AddParameter(IvyProtoFBX::HideEyes, protoModel.GetMorphWeightReference(IvyProtoFBX::HideEyes), 15, IEasyEaseAnimator::InterpolationMethod::Cosine, false);
        
        AddParameter(IvyProtoFBX::EyeLash, protoModel.GetMorphWeightReference(IvyProtoFBX::EyeLash), 15, IEasyEaseAnimator::InterpolationMethod::Cosine, true);
        
        AddViseme(Viseme::MouthShape::EE, protoModel.GetMorphWeightReference(IvyProtoFBX::vrc_v_ee));
        AddViseme(Viseme::MouthShape::AH, protoModel.GetMorphWeightReference(IvyProtoFBX::vrc_v_aa));
        AddViseme(Viseme::MouthShape::UH, protoModel.GetMorphWeightReference(IvyProtoFBX::vrc_v_dd));
        AddViseme(Viseme::MouthShape::AR, protoModel.GetMorphWeightReference(IvyProtoFBX::vrc_v_rr));
        AddViseme(Viseme::MouthShape::ER, protoModel.GetMorphWeightReference(IvyProtoFBX::vrc_v_ch));
        AddViseme(Viseme::MouthShape::OO, protoModel.GetMorphWeightReference(IvyProtoFBX::vrc_v_oh));
        AddViseme(Viseme::MouthShape::SS, protoModel.GetMorphWeightReference(IvyProtoFBX::vrc_v_ss));

        AddBlinkParameter(protoModel.GetMorphWeightReference(IvyProtoFBX::Blink));
    }

    void Default(){
        EnableBlinking();
    }

    void Angry(){
        AddParameterFrame(IvyProtoFBX::Angry, 1.0f);
        AddParameterFrame(IvyProtoFBX::Frown, 1.0f);
        AddParameterFrame(IvyProtoFBX::HideBlush, 1.0f);
        AddMaterialFrame(Color::CRED);
        EnableBlinking();
    } 

    void Sad(){
        AddParameterFrame(IvyProtoFBX::SadEyes, 1.0f);
        AddParameterFrame(IvyProtoFBX::Frown, 1.0f);
        AddParameterFrame(IvyProtoFBX::HideBlush, 1.0f);
        AddMaterialFrame(Color::CBLUE);
        EnableBlinking();
    }

    void Surprised(){
        AddParameterFrame(IvyProtoFBX::HideEyes, 1.0f);
        AddParameterFrame(IvyProtoFBX::HideCrossEyes, 0.0f);
        AddParameterFrame(IvyProtoFBX::HideBlush, 1.0f);
        AddParameterFrame(IvyProtoFBX::Frown, 1.0f);
        AddMaterialFrame(Color::CORANGE);
        DisableBlinking();
    }
    
    void Doubt(){
        AddParameterFrame(IvyProtoFBX::Angry, 1.0f);
        EnableBlinking();
    }
    
    void Frown(){
        AddParameterFrame(IvyProtoFBX::Frown, 1.0f);
        EnableBlinking();
    }

    void Happy(){
        AddParameterFrame(IvyProtoFBX::Happy, 1.0f);
        AddMaterialFrame(Color::CRAINBOW);
        EnableBlinking();
    }

public:
    IvyProto() : ProtogenProject(&cameras, &controller, 2, Vector2D(), Vector2D(192.0f, 94.0f), 22, 23, 9){
        scene.AddObject(protoModel.GetObject());
        scene.AddObject(deltaDisplayBackground.GetObject());

        protoModel.GetObject()->SetMaterial(GetFaceMaterial());
        deltaDisplayBackground.GetObject()->SetMaterial(GetFaceMaterial());

        hud.SetFaceArray(faceArray);

        LinkControlParameters();
        
        SetWiggleSpeed(1.0f);
        SetMenuWiggleSpeed(1.0f, 1.0f, 1.0f);
        SetMenuOffset(Vector2D(17.5f, -3.0f));
        SetMenuSize(Vector2D(192, 56));

        //controller.SetFlipped(true);
        //SetBackgroundBaseMaterial(&rainbowSpiral);
        SetBaseMaterial(&flowNoise);
    }

    void Update(float ratio) override {
        protoModel.Reset();

        uint8_t mode = Menu::GetFaceState();//change by button press

        controller.SetBrightness(Menu::GetBrightness());
        controller.SetAccentBrightness(Menu::GetAccentBrightness());

        //Serial.println(Menu::UseEyelashes());

#ifdef MORSEBUTTON
        SelectFaceFromMorse(mode);
#else
        SelectFace(mode);
#endif

        if (Menu::UseEyelashes() == 1)
            AddParameterFrame(IvyProtoFBX::EyeLash, 1.0f);
        else
            AddParameterFrame(IvyProtoFBX::EyeLash, 0.0f);

        UpdateFace(ratio);

        protoModel.Update();

        AlignObjectFace(protoModel.GetObject(), 0.0f);

        protoModel.GetObject()->GetTransform()->SetPosition(GetWiggleOffset());
        protoModel.GetObject()->UpdateTransform();
    }

    void SelectFace(uint8_t code) {
        if (IsBooped() && code != 6) {
            Surprised();
            return;
        }

        switch(code) {
            case 0: Default();  break;
            case 1: Angry();    break;
            case 2: Doubt();    break;
            case 3: Frown();    break;
            case 5: Sad();      break;
            case 6: AudioReactiveGradientFace();    break;
            case 7: OscilloscopeFace();             break;
            default: SpectrumAnalyzerFace();        break;
        }
    }

    void SelectFaceFromMorse(uint8_t code) {
        if (IsBooped() && code != 24) {
            Happy();
            return;
        }

        switch(code) {
            case 1: Angry();        break; // [A]ngry .-
            case 2: Surprised();    break; // [B]lush -...
            case 4: Doubt();        break; // [D]oubt 
            case 6: Frown();        break; // [F]rown
            case 8: Happy();         break; // [H]appy  ....
            case 19: Sad();         break; // [S]ad ...
            case 24: AudioReactiveGradientFace();   break; // [X] X.X
            case 25: OscilloscopeFace();            break; // [Y] Oscilloscope
            case 26: SpectrumAnalyzerFace();        break; // [Z] Spectrum
            default: Default();     break; // [H] Happy
        }
    }
};
