#pragma once

#include "Utils\Morph.h"
#include "..\..\..\Utils\Math\Rotation.h"
#include "..\..\..\Scene\Materials\Static\SimpleMaterial.h"
#include "..\..\..\Scene\Objects\Object3D.h"
#include "..\..\..\Renderer\Utils\IndexGroup.h"

class IvyProtoFBX{
public:
    enum Morphs {
        EyeLash,
        HideBlush,
        Blink,
        Happy,
        SadEyes,
        Frown,
        Angry,
        Ehheh,
        HideEyes,
        HideCrossEyes,
        vrc_v_ee,
        vrc_v_aa,
        vrc_v_dd,
        vrc_v_rr,
        vrc_v_ch,
        vrc_v_oh,
        vrc_v_ss
    };

private:
    Vector3D* basisVertices = new Vector3D[44] {Vector3D(-34.7634f,31.1887f,0.0000f),Vector3D(-14.6695f,25.3924f,0.0000f),Vector3D(-52.0187f,43.8413f,0.0000f),Vector3D(-6.6809f,33.5019f,0.0000f),Vector3D(-15.4684f,2.9903f,0.0000f),Vector3D(-8.0656f,14.7552f,0.0000f),Vector3D(37.8955f,31.1887f,-0.0000f),Vector3D(37.5760f,39.1415f,-0.0000f),Vector3D(70.1696f,18.4994f,-0.0000f),Vector3D(69.8500f,26.4522f,-0.0000f),Vector3D(100.8460f,27.5856f,-0.0000f),Vector3D(100.5262f,35.5384f,-0.0000f),Vector3D(58.8507f,58.7105f,-0.0000f),Vector3D(37.9025f,66.2774f,-0.0000f),Vector3D(58.7328f,62.9162f,-0.0000f),Vector3D(-86.4246f,70.9936f,0.0000f),Vector3D(-2.6478f,65.5106f,0.0000f),Vector3D(-46.1021f,96.3506f,0.0000f),Vector3D(-66.1070f,84.0481f,0.0000f),Vector3D(-52.7050f,92.3925f,0.0000f),Vector3D(-59.8164f,88.1890f,0.0000f),Vector3D(-65.9373f,53.1231f,0.0000f),Vector3D(-46.0743f,51.8176f,0.0000f),Vector3D(-71.4298f,66.4863f,0.0000f),Vector3D(-59.0479f,65.9449f,0.0000f),Vector3D(-51.5668f,65.1808f,0.0000f),Vector3D(-39.1849f,64.6394f,0.0000f),Vector3D(-44.5362f,68.2522f,0.0000f),Vector3D(-100.0000f,0.0000f,0.0000f),Vector3D(100.0000f,0.0000f,0.0000f),Vector3D(-100.0000f,100.0000f,0.0000f),Vector3D(100.0000f,100.0000f,0.0000f),Vector3D(-67.5421f,49.9940f,0.0000f),Vector3D(-58.7553f,45.3689f,0.0000f),Vector3D(-28.8832f,54.6381f,0.0000f),Vector3D(-24.2581f,63.4248f,0.0000f),Vector3D(-33.5273f,93.2969f,0.0000f),Vector3D(-42.3140f,97.9220f,0.0000f),Vector3D(-72.1861f,88.6529f,0.0000f),Vector3D(-76.8112f,79.8661f,0.0000f),Vector3D(-48.4538f,64.9395f,0.0000f),Vector3D(-57.2406f,69.5646f,0.0000f),Vector3D(-43.8287f,73.7263f,0.0000f),Vector3D(-52.6155f,78.3514f,0.0000f)};
    IndexGroup* basisIndexes = new IndexGroup[28] {IndexGroup(0,3,2),IndexGroup(1,5,3),IndexGroup(5,6,7),IndexGroup(6,9,7),IndexGroup(9,10,11),IndexGroup(12,14,13),IndexGroup(0,1,3),IndexGroup(1,4,5),IndexGroup(5,4,6),IndexGroup(6,8,9),IndexGroup(9,8,10),IndexGroup(27,17,19),IndexGroup(21,24,23),IndexGroup(22,26,25),IndexGroup(18,15,27),IndexGroup(27,16,17),IndexGroup(19,20,27),IndexGroup(20,18,27),IndexGroup(43,39,41),IndexGroup(40,32,33),IndexGroup(34,42,40),IndexGroup(40,43,41),IndexGroup(36,43,42),IndexGroup(43,38,39),IndexGroup(40,41,32),IndexGroup(34,35,42),IndexGroup(40,42,43),IndexGroup(36,37,43)};
    StaticTriangleGroup<44,28> triangleGroup = StaticTriangleGroup<44,28>(&basisVertices[0], &basisIndexes[0]);
    TriangleGroup<44,28> triangleGroupMemory = TriangleGroup<44,28>(&triangleGroup);
    SimpleMaterial simpleMaterial = SimpleMaterial(RGBColor(128, 128, 128));
    Object3D basisObj = Object3D(&triangleGroup, &triangleGroupMemory, &simpleMaterial);

    static const uint8_t morphCount = 17;
    int* EyeLashIndexes = new int[1] {20};
    int* HideBlushIndexes = new int[6] {21,22,23,24,25,26};
    int* BlinkIndexes = new int[27] {0,1,2,3,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27};
    int* HappyIndexes = new int[20] {0,1,2,3,6,7,15,16,17,18,19,20,21,22,23,24,25,26,27,39};
    int* SadEyesIndexes = new int[13] {15,16,17,18,19,20,21,22,23,24,25,26,27};
    int* FrownIndexes = new int[10] {0,1,2,3,4,5,6,7,8,9};
    int* AngryIndexes = new int[13] {15,16,17,18,19,20,21,22,23,24,25,26,27};
    int* EhhehIndexes = new int[25] {0,1,2,3,5,6,7,8,9,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27};
    int* HideEyesIndexes = new int[7] {15,16,17,18,19,20,27};
    int* HideCrossEyesIndexes = new int[12] {32,33,34,35,36,37,38,39,40,41,42,43};
    int* vrc_v_eeIndexes = new int[11] {0,1,2,3,4,5,6,7,8,9,10};
    int* vrc_v_aaIndexes = new int[9] {3,4,5,6,7,8,9,10,11};
    int* vrc_v_ddIndexes = new int[6] {1,4,5,6,9,11};
    int* vrc_v_rrIndexes = new int[12] {0,1,2,3,4,5,6,7,8,9,10,11};
    int* vrc_v_chIndexes = new int[10] {0,1,2,3,4,5,8,9,10,11};
    int* vrc_v_ohIndexes = new int[11] {0,1,3,4,5,6,7,8,9,10,11};
    int* vrc_v_ssIndexes = new int[11] {0,1,3,4,5,6,7,8,9,10,11};

    Vector3D* EyeLashVectors = new Vector3D[1] {Vector3D(-23.7163f,9.8837f,0.0000f)};
    Vector3D* HideBlushVectors = new Vector3D[6] {Vector3D(7.9356f,25.4798f,0.0000f),Vector3D(7.9356f,25.4798f,0.0000f),Vector3D(13.1993f,12.6732f,0.0000f),Vector3D(1.3332f,13.1921f,0.0000f),Vector3D(13.1993f,12.6732f,0.0000f),Vector3D(1.3332f,13.1921f,0.0000f)};
    Vector3D* BlinkVectors = new Vector3D[27] {Vector3D(0.0000f,-7.7091f,0.0000f),Vector3D(0.0000f,-6.8862f,0.0000f),Vector3D(0.0000f,-9.5054f,0.0000f),Vector3D(0.0000f,-8.0375f,0.0000f),Vector3D(0.0000f,-2.2844f,0.0000f),Vector3D(0.0000f,-7.7091f,0.0000f),Vector3D(0.0000f,-8.8382f,0.0000f),Vector3D(0.0000f,-2.8160f,0.0000f),Vector3D(0.0000f,-3.9450f,0.0000f),Vector3D(0.0000f,-4.1059f,0.0000f),Vector3D(0.0000f,-5.2350f,0.0000f),Vector3D(0.3062f,-4.9543f,0.0000f),Vector3D(0.3062f,-4.9543f,0.0000f),Vector3D(0.3062f,-4.9544f,0.0000f),Vector3D(0.0000f,-2.4021f,0.0000f),Vector3D(-0.5617f,-6.3055f,0.0000f),Vector3D(2.8174f,-27.0981f,0.0000f),Vector3D(-2.1687f,-14.9944f,0.0000f),Vector3D(1.2478f,-23.1243f,0.0000f),Vector3D(-0.3986f,-18.8570f,0.0000f),Vector3D(-1.7245f,-3.9087f,0.0000f),Vector3D(-2.5278f,-5.9365f,0.0000f),Vector3D(0.6944f,-3.4255f,0.0000f),Vector3D(0.4684f,-4.8264f,0.0000f),Vector3D(0.5898f,-5.3692f,0.0000f),Vector3D(0.2529f,-7.1604f,0.0000f),Vector3D(-0.2808f,-4.3538f,0.0000f)};
    Vector3D* HappyVectors = new Vector3D[20] {Vector3D(13.1232f,-3.1905f,0.0000f),Vector3D(-0.6125f,-1.2011f,0.0000f),Vector3D(13.1232f,-3.1905f,0.0000f),Vector3D(-0.6125f,-1.2010f,0.0000f),Vector3D(0.0000f,-1.9517f,0.0000f),Vector3D(0.0000f,-1.9517f,0.0000f),Vector3D(-8.4203f,9.8259f,0.0000f),Vector3D(2.3298f,-1.5649f,0.0000f),Vector3D(6.4351f,1.9408f,0.0000f),Vector3D(-6.7182f,4.0059f,0.0000f),Vector3D(2.1098f,2.6219f,0.0000f),Vector3D(-2.5393f,3.3552f,0.0000f),Vector3D(-1.7914f,5.1726f,0.0000f),Vector3D(-4.9594f,3.0299f,0.0000f),Vector3D(-1.0305f,5.6927f,0.0000f),Vector3D(-1.1337f,4.5357f,0.0000f),Vector3D(-2.6912f,3.7503f,0.0000f),Vector3D(-2.9480f,1.7250f,0.0000f),Vector3D(1.6871f,18.0105f,0.0000f),Vector3D(-3.0190f,5.5129f,0.0000f)};
    Vector3D* SadEyesVectors = new Vector3D[13] {Vector3D(0.0237f,-2.5308f,0.0000f),Vector3D(0.2885f,3.1995f,0.0000f),Vector3D(17.4618f,-4.8085f,0.0000f),Vector3D(8.4406f,-4.0909f,0.0000f),Vector3D(10.1664f,-6.2973f,0.0000f),Vector3D(5.7234f,-6.7430f,0.0000f),Vector3D(1.8406f,-1.0670f,0.0000f),Vector3D(1.9039f,0.2916f,0.0000f),Vector3D(0.4448f,-1.4918f,0.0000f),Vector3D(0.4554f,-0.6459f,0.0000f),Vector3D(0.5082f,-0.1332f,0.0000f),Vector3D(0.5188f,0.7127f,0.0000f),Vector3D(0.1561f,0.3343f,0.0000f)};
    Vector3D* FrownVectors = new Vector3D[10] {Vector3D(-2.5957f,-4.1111f,0.0000f),Vector3D(-4.2873f,2.1018f,0.0000f),Vector3D(-6.1319f,-16.3069f,0.0000f),Vector3D(-4.2873f,2.1019f,0.0000f),Vector3D(5.3591f,4.9543f,0.0000f),Vector3D(5.3591f,4.9543f,0.0000f),Vector3D(-4.2873f,1.0509f,0.0000f),Vector3D(-4.2872f,1.0509f,0.0000f),Vector3D(-3.6748f,-0.1501f,0.0000f),Vector3D(-3.6748f,-0.1501f,0.0000f)};
    Vector3D* AngryVectors = new Vector3D[13] {Vector3D(0.0976f,1.0791f,0.0000f),Vector3D(-0.3328f,-2.1473f,0.0000f),Vector3D(-16.7591f,-3.9453f,0.0000f),Vector3D(-14.0440f,-6.3397f,0.0000f),Vector3D(-15.8834f,-4.7370f,0.0000f),Vector3D(-14.9520f,-5.5904f,0.0000f),Vector3D(-0.9998f,0.3101f,0.0000f),Vector3D(-1.1022f,-0.4549f,0.0000f),Vector3D(-0.1911f,0.5059f,0.0000f),Vector3D(-0.2385f,0.0287f,0.0000f),Vector3D(-0.2935f,-0.2591f,0.0000f),Vector3D(-0.3409f,-0.7362f,0.0000f),Vector3D(-0.1176f,-0.5341f,0.0000f)};
    Vector3D* EhhehVectors = new Vector3D[25] {Vector3D(-5.9539f,1.8901f,0.0000f),Vector3D(1.8901f,3.7803f,0.0000f),Vector3D(-4.9773f,-2.5202f,0.0000f),Vector3D(0.0000f,2.0476f,0.0000f),Vector3D(-0.7876f,-2.3627f,0.0000f),Vector3D(-3.4652f,-6.4579f,0.0000f),Vector3D(-3.4652f,-6.4579f,0.0000f),Vector3D(-0.6300f,1.1026f,0.0000f),Vector3D(-0.6300f,2.5202f,0.0000f),Vector3D(0.5670f,3.0242f,0.0000f),Vector3D(0.5670f,3.0242f,0.0000f),Vector3D(0.5670f,3.0242f,0.0000f),Vector3D(-3.5814f,-10.3023f,0.0000f),Vector3D(-3.7254f,3.1871f,0.0000f),Vector3D(19.2683f,-10.7774f,0.0000f),Vector3D(16.3165f,-7.2179f,0.0000f),Vector3D(18.6200f,-9.6406f,0.0000f),Vector3D(14.1706f,-9.9371f,0.0000f),Vector3D(-0.1375f,-6.6895f,0.0000f),Vector3D(-0.1704f,-3.4911f,0.0000f),Vector3D(-2.8650f,-7.8209f,0.0000f),Vector3D(-2.9429f,-5.8323f,0.0000f),Vector3D(-2.8980f,-4.6226f,0.0000f),Vector3D(-2.9759f,-2.6340f,0.0000f),Vector3D(-3.6534f,-3.5576f,0.0000f)};
    Vector3D* HideEyesVectors = new Vector3D[7] {Vector3D(33.8934f,-0.2464f,-0.0000f),Vector3D(-49.8835f,5.2366f,0.0000f),Vector3D(-6.4292f,-25.6034f,0.0000f),Vector3D(13.5758f,-13.3009f,0.0000f),Vector3D(0.1738f,-21.6453f,0.0000f),Vector3D(7.2851f,-17.4417f,0.0000f),Vector3D(-7.9950f,2.4951f,0.0000f)};
    Vector3D* HideCrossEyesVectors = new Vector3D[12] {Vector3D(17.0074f,21.6514f,0.0000f),Vector3D(8.2206f,26.2766f,0.0000f),Vector3D(-21.6514f,17.0074f,0.0000f),Vector3D(-26.2766f,8.2206f,0.0000f),Vector3D(-17.0074f,-21.6514f,0.0000f),Vector3D(-8.2206f,-26.2766f,0.0000f),Vector3D(21.6514f,-17.0074f,0.0000f),Vector3D(26.2765f,-8.2206f,0.0000f),Vector3D(-2.0808f,6.7060f,0.0000f),Vector3D(6.7060f,2.0808f,0.0000f),Vector3D(-6.7060f,-2.0808f,0.0000f),Vector3D(2.0808f,-6.7059f,0.0000f)};
    Vector3D* vrc_v_eeVectors = new Vector3D[11] {Vector3D(-3.7851f,0.7570f,0.0000f),Vector3D(-3.9743f,1.5140f,0.0000f),Vector3D(-9.6519f,-1.8925f,0.0000f),Vector3D(-3.9743f,1.5140f,0.0000f),Vector3D(-3.4065f,0.0000f,0.0000f),Vector3D(-3.4065f,0.0000f,0.0000f),Vector3D(0.0000f,-9.6519f,0.0000f),Vector3D(0.0000f,-1.7033f,0.0000f),Vector3D(0.0000f,-9.6519f,0.0000f),Vector3D(0.0000f,-0.7570f,0.0000f),Vector3D(0.0000f,-9.6519f,0.0000f)};
    Vector3D* vrc_v_aaVectors = new Vector3D[9] {Vector3D(0.0000f,2.6495f,0.0000f),Vector3D(-2.4603f,0.9463f,0.0000f),Vector3D(0.7570f,8.8949f,0.0000f),Vector3D(0.0000f,-2.8388f,0.0000f),Vector3D(0.0000f,5.1098f,0.0000f),Vector3D(0.0000f,-2.6495f,0.0000f),Vector3D(0.0000f,5.1098f,0.0000f),Vector3D(0.0000f,-2.6495f,0.0000f),Vector3D(0.0000f,5.1098f,0.0000f)};
    Vector3D* vrc_v_ddVectors = new Vector3D[6] {Vector3D(-0.9463f,0.0000f,0.0000f),Vector3D(-2.0818f,0.1893f,0.0000f),Vector3D(0.0000f,6.2453f,0.0000f),Vector3D(0.0000f,-7.5701f,0.0000f),Vector3D(0.0000f,3.5958f,0.0000f),Vector3D(0.0000f,1.8925f,0.0000f)};
    Vector3D* vrc_v_rrVectors = new Vector3D[12] {Vector3D(9.6519f,-1.1355f,0.0000f),Vector3D(1.8925f,1.1355f,0.0000f),Vector3D(6.2453f,-4.9206f,0.0000f),Vector3D(1.8925f,1.1355f,0.0000f),Vector3D(3.2173f,1.8925f,0.0000f),Vector3D(3.2173f,1.8925f,0.0000f),Vector3D(0.0000f,-5.6776f,0.0000f),Vector3D(0.0000f,-2.0818f,0.0000f),Vector3D(0.0000f,-6.0561f,0.0000f),Vector3D(0.0000f,8.3271f,0.0000f),Vector3D(0.0000f,-6.6238f,0.0000f),Vector3D(0.0000f,5.6776f,0.0000f)};
    Vector3D* vrc_v_chVectors = new Vector3D[10] {Vector3D(11.1659f,-0.3785f,0.0000f),Vector3D(3.7851f,0.5678f,0.0000f),Vector3D(7.9486f,-3.4065f,0.0000f),Vector3D(3.7851f,0.5678f,0.0000f),Vector3D(1.3248f,-0.1893f,0.0000f),Vector3D(1.3248f,-0.1893f,0.0000f),Vector3D(0.0000f,-6.8131f,0.0000f),Vector3D(0.0000f,9.4626f,0.0000f),Vector3D(0.0000f,-7.5701f,0.0000f),Vector3D(0.0000f,7.1916f,0.0000f)};
    Vector3D* vrc_v_ohVectors = new Vector3D[11] {Vector3D(3.2173f,2.2710f,0.0000f),Vector3D(3.2173f,2.2710f,0.0000f),Vector3D(1.3248f,2.6495f,0.0000f),Vector3D(6.0561f,3.9743f,0.0000f),Vector3D(5.4883f,4.7313f,0.0000f),Vector3D(0.0000f,-7.7594f,0.0000f),Vector3D(0.0000f,7.7594f,0.0000f),Vector3D(0.0000f,-7.7594f,0.0000f),Vector3D(0.0000f,7.7594f,0.0000f),Vector3D(0.0000f,-7.7594f,0.0000f),Vector3D(0.0000f,7.7594f,0.0000f)};
    Vector3D* vrc_v_ssVectors = new Vector3D[11] {Vector3D(-2.8388f,2.8388f,0.0000f),Vector3D(-4.5421f,-3.7851f,0.0000f),Vector3D(0.9463f,2.2710f,0.0000f),Vector3D(-1.7033f,-0.3785f,0.0000f),Vector3D(2.4603f,10.2196f,0.0000f),Vector3D(-3.4065f,-6.2453f,0.0000f),Vector3D(-3.5958f,-3.9743f,0.0000f),Vector3D(0.0000f,-3.0280f,0.0000f),Vector3D(0.0000f,0.9463f,0.0000f),Vector3D(0.0000f,-2.4603f,0.0000f),Vector3D(0.0000f,1.3248f,0.0000f)};

    Morph morphs[17] = {
        Morph(1, EyeLashIndexes, EyeLashVectors),
        Morph(6, HideBlushIndexes, HideBlushVectors),
        Morph(27, BlinkIndexes, BlinkVectors),
        Morph(20, HappyIndexes, HappyVectors),
        Morph(13, SadEyesIndexes, SadEyesVectors),
        Morph(10, FrownIndexes, FrownVectors),
        Morph(13, AngryIndexes, AngryVectors),
        Morph(25, EhhehIndexes, EhhehVectors),
        Morph(7, HideEyesIndexes, HideEyesVectors),
        Morph(12, HideCrossEyesIndexes, HideCrossEyesVectors),
        Morph(11, vrc_v_eeIndexes, vrc_v_eeVectors),
        Morph(9, vrc_v_aaIndexes, vrc_v_aaVectors),
        Morph(6, vrc_v_ddIndexes, vrc_v_ddVectors),
        Morph(12, vrc_v_rrIndexes, vrc_v_rrVectors),
        Morph(10, vrc_v_chIndexes, vrc_v_chVectors),
        Morph(11, vrc_v_ohIndexes, vrc_v_ohVectors),
        Morph(11, vrc_v_ssIndexes, vrc_v_ssVectors)
    };

public:
    IvyProtoFBX(){}

    Object3D* GetObject(){
        return &basisObj;
    }

    void SetMorphWeight(Morphs morph, float weight){
        morphs[morph].Weight = weight;
    }

    float* GetMorphWeightReference(Morphs morph){
        return &morphs[morph].Weight;
    }

    void Reset(){
        for(int i = 0; i < morphCount; i++){
            morphs[i].Weight = 0.0f;
        }
    }

    void Update(){
        basisObj.ResetVertices();

        for(int i = 0; i < morphCount; i++){
            if(morphs[i].Weight > 0.0f){
                morphs[i].MorphObject3D(basisObj.GetTriangleGroup());
            }
        }

    }
};
