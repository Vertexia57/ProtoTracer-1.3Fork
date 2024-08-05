#pragma once

#include "..\..\..\Scene\Materials\Static\SimpleMaterial.h"
#include "..\..\..\Scene\Materials\Static\UVMap.h"
#include "..\..\..\Scene\Objects\Object3D.h"
#include "..\..\..\Renderer\Utils\IndexGroup.h"

class LoadingModules {
private:
	Vector3D basisVertices[234] = {Vector3D(8.9400f,4.4400f,0.0000f),Vector3D(8.9962f,40.4963f,0.0000f),Vector3D(0.0037f,40.4963f,0.0000f),Vector3D(0.0037f,0.0037f,0.0000f),Vector3D(26.9962f,0.0037f,0.0000f),Vector3D(26.9962f,4.4962f,0.0000f),Vector3D(53.9400f,4.4400f,0.0000f),Vector3D(58.4963f,4.4962f,0.0000f),Vector3D(58.4963f,27.0038f,0.0000f),Vector3D(54.0000f,27.0038f,0.0000f),Vector3D(54.0000f,31.4962f,0.0000f),Vector3D(36.0000f,31.4962f,0.0000f),Vector3D(36.0000f,27.0038f,0.0000f),Vector3D(31.5038f,27.0038f,0.0000f),Vector3D(31.5038f,4.4962f,0.0000f),Vector3D(36.0000f,4.4962f,0.0000f),Vector3D(36.0000f,0.0037f,0.0000f),Vector3D(54.0000f,0.0037f,0.0000f),Vector3D(49.5037f,4.4962f,0.0000f),Vector3D(49.5037f,27.0038f,0.0000f),Vector3D(40.4963f,27.0038f,0.0000f),Vector3D(40.4400f,4.4400f,0.0000f),Vector3D(67.4400f,26.9400f,0.0000f),Vector3D(63.0037f,26.9962f,0.0000f),Vector3D(63.0037f,22.5038f,0.0000f),Vector3D(71.9963f,22.5038f,0.0000f),Vector3D(71.9963f,27.0038f,0.0000f),Vector3D(81.0037f,27.0038f,0.0000f),Vector3D(81.0037f,17.9962f,0.0000f),Vector3D(67.5000f,17.9962f,0.0000f),Vector3D(67.5000f,13.4962f,0.0000f),Vector3D(63.0037f,13.4962f,0.0000f),Vector3D(63.0037f,4.5038f,0.0000f),Vector3D(67.5000f,4.5038f,0.0000f),Vector3D(67.5000f,0.0037f,0.0000f),Vector3D(89.9963f,0.0037f,0.0000f),Vector3D(89.9963f,27.0038f,0.0000f),Vector3D(85.5000f,27.0038f,0.0000f),Vector3D(85.5000f,31.4962f,0.0000f),Vector3D(67.5000f,31.4962f,0.0000f),Vector3D(81.0037f,4.4962f,0.0000f),Vector3D(81.0037f,13.5038f,0.0000f),Vector3D(71.9963f,13.5038f,0.0000f),Vector3D(71.9400f,4.4400f,0.0000f),Vector3D(121.4400f,0.0000f,0.0000f),Vector3D(121.4963f,40.4963f,0.0000f),Vector3D(112.5037f,40.4963f,0.0000f),Vector3D(112.5037f,31.4962f,0.0000f),Vector3D(99.0000f,31.4962f,0.0000f),Vector3D(99.0000f,27.0038f,0.0000f),Vector3D(94.5037f,27.0038f,0.0000f),Vector3D(94.5037f,4.4962f,0.0000f),Vector3D(99.0000f,4.4962f,0.0000f),Vector3D(99.0000f,0.0037f,0.0000f),Vector3D(112.5037f,4.4962f,0.0000f),Vector3D(112.5037f,27.0038f,0.0000f),Vector3D(103.4963f,27.0038f,0.0000f),Vector3D(103.4400f,4.4400f,0.0000f),Vector3D(135.0000f,27.0000f,0.0000f),Vector3D(135.0037f,4.4962f,0.0000f),Vector3D(126.0037f,4.4962f,0.0000f),Vector3D(126.0037f,0.0037f,0.0000f),Vector3D(152.9963f,0.0037f,0.0000f),Vector3D(152.9963f,4.4962f,0.0000f),Vector3D(143.9963f,4.4962f,0.0000f),Vector3D(143.9963f,31.4962f,0.0000f),Vector3D(126.0037f,31.4962f,0.0000f),Vector3D(126.0037f,27.0038f,0.0000f),Vector3D(143.9400f,44.9400f,0.0000f),Vector3D(135.0037f,44.9963f,0.0000f),Vector3D(135.0037f,36.0037f,0.0000f),Vector3D(143.9963f,36.0037f,0.0000f),Vector3D(166.4400f,27.0000f,0.0000f),Vector3D(175.5037f,27.0038f,0.0000f),Vector3D(175.5037f,0.0037f,0.0000f),Vector3D(184.4963f,0.0037f,0.0000f),Vector3D(184.4963f,27.0038f,0.0000f),Vector3D(180.0000f,27.0038f,0.0000f),Vector3D(180.0000f,31.4962f,0.0000f),Vector3D(157.5037f,31.4962f,0.0000f),Vector3D(157.5037f,0.0037f,0.0000f),Vector3D(166.4963f,0.0037f,0.0000f),Vector3D(211.4400f,-9.0000f,0.0000f),Vector3D(215.9963f,-8.9962f,0.0000f),Vector3D(215.9963f,31.4962f,0.0000f),Vector3D(193.5000f,31.4962f,0.0000f),Vector3D(193.5000f,27.0038f,0.0000f),Vector3D(189.0037f,27.0038f,0.0000f),Vector3D(189.0037f,4.4962f,0.0000f),Vector3D(193.5000f,4.4962f,0.0000f),Vector3D(193.5000f,0.0037f,0.0000f),Vector3D(207.0037f,0.0037f,0.0000f),Vector3D(207.0037f,-9.0038f,0.0000f),Vector3D(197.9963f,-9.0038f,0.0000f),Vector3D(197.9963f,-4.5038f,0.0000f),Vector3D(189.0037f,-4.5038f,0.0000f),Vector3D(189.0037f,-8.9962f,0.0000f),Vector3D(193.5000f,-8.9962f,0.0000f),Vector3D(193.5000f,-13.4962f,0.0000f),Vector3D(211.5000f,-13.4962f,0.0000f),Vector3D(197.9963f,27.0038f,0.0000f),Vector3D(197.9963f,4.4962f,0.0000f),Vector3D(207.0037f,4.4962f,0.0000f),Vector3D(207.0000f,27.0000f,0.0000f),Vector3D(242.9400f,22.5000f,0.0000f),Vector3D(247.5037f,22.5038f,0.0000f),Vector3D(247.5037f,4.5037f,0.0000f),Vector3D(251.9963f,4.5037f,0.0000f),Vector3D(251.9963f,22.5038f,0.0000f),Vector3D(256.5038f,22.5038f,0.0000f),Vector3D(256.5038f,0.0037f,0.0000f),Vector3D(265.4962f,0.0037f,0.0000f),Vector3D(265.4962f,27.0000f,0.0000f),Vector3D(260.9962f,27.0000f,0.0000f),Vector3D(260.9962f,31.4962f,0.0000f),Vector3D(252.0037f,31.4962f,0.0000f),Vector3D(252.0037f,27.0000f,0.0000f),Vector3D(247.5037f,27.0000f,0.0000f),Vector3D(247.5037f,31.4962f,0.0000f),Vector3D(234.0037f,31.4962f,0.0000f),Vector3D(234.0037f,0.0037f,0.0000f),Vector3D(242.9963f,0.0037f,0.0000f),Vector3D(292.4400f,4.4400f,0.0000f),Vector3D(296.9962f,4.4962f,0.0000f),Vector3D(296.9962f,27.0038f,0.0000f),Vector3D(292.5000f,27.0038f,0.0000f),Vector3D(292.5000f,31.4962f,0.0000f),Vector3D(274.5000f,31.4962f,0.0000f),Vector3D(274.5000f,27.0038f,0.0000f),Vector3D(270.0038f,27.0038f,0.0000f),Vector3D(270.0038f,4.4962f,0.0000f),Vector3D(274.5000f,4.4962f,0.0000f),Vector3D(274.5000f,0.0037f,0.0000f),Vector3D(292.5000f,0.0037f,0.0000f),Vector3D(288.0038f,4.4962f,0.0000f),Vector3D(288.0038f,27.0038f,0.0000f),Vector3D(278.9962f,27.0038f,0.0000f),Vector3D(278.9400f,4.4400f,0.0000f),Vector3D(328.4400f,0.0000f,0.0000f),Vector3D(328.4962f,40.4963f,0.0000f),Vector3D(319.5038f,40.4963f,0.0000f),Vector3D(319.5038f,31.4962f,0.0000f),Vector3D(306.0000f,31.4962f,0.0000f),Vector3D(306.0000f,27.0038f,0.0000f),Vector3D(301.5038f,27.0038f,0.0000f),Vector3D(301.5038f,4.4962f,0.0000f),Vector3D(306.0000f,4.4962f,0.0000f),Vector3D(306.0000f,0.0037f,0.0000f),Vector3D(319.5038f,4.4962f,0.0000f),Vector3D(319.5038f,27.0038f,0.0000f),Vector3D(310.4962f,27.0038f,0.0000f),Vector3D(310.4400f,4.4400f,0.0000f),Vector3D(351.0000f,4.4400f,0.0000f),Vector3D(341.9962f,4.4962f,0.0000f),Vector3D(341.9962f,31.4963f,0.0000f),Vector3D(333.0038f,31.4963f,0.0000f),Vector3D(333.0038f,4.4962f,0.0000f),Vector3D(337.5000f,4.4962f,0.0000f),Vector3D(337.5000f,0.0037f,0.0000f),Vector3D(359.9962f,0.0037f,0.0000f),Vector3D(359.9962f,31.4963f,0.0000f),Vector3D(351.0038f,31.4963f,0.0000f),Vector3D(373.5000f,36.0000f,0.0000f),Vector3D(373.5038f,4.4962f,0.0000f),Vector3D(364.5038f,4.4962f,0.0000f),Vector3D(364.5038f,0.0037f,0.0000f),Vector3D(391.4962f,0.0037f,0.0000f),Vector3D(391.4962f,4.4962f,0.0000f),Vector3D(382.4962f,4.4962f,0.0000f),Vector3D(382.4962f,40.4963f,0.0000f),Vector3D(364.5038f,40.4963f,0.0000f),Vector3D(364.5038f,36.0037f,0.0000f),Vector3D(418.4400f,4.5000f,0.0000f),Vector3D(422.9962f,4.5038f,0.0000f),Vector3D(422.9962f,8.9962f,0.0000f),Vector3D(414.0038f,8.9962f,0.0000f),Vector3D(414.0038f,4.4962f,0.0000f),Vector3D(404.9962f,4.4962f,0.0000f),Vector3D(404.9962f,13.5038f,0.0000f),Vector3D(422.9962f,13.5038f,0.0000f),Vector3D(422.9962f,27.0038f,0.0000f),Vector3D(418.5000f,27.0038f,0.0000f),Vector3D(418.5000f,31.4962f,0.0000f),Vector3D(400.5000f,31.4962f,0.0000f),Vector3D(400.5000f,27.0038f,0.0000f),Vector3D(396.0038f,27.0038f,0.0000f),Vector3D(396.0038f,4.5038f,0.0000f),Vector3D(400.5000f,4.5038f,0.0000f),Vector3D(400.5000f,0.0037f,0.0000f),Vector3D(418.5000f,0.0037f,0.0000f),Vector3D(414.0038f,17.9962f,0.0000f),Vector3D(414.0038f,27.0038f,0.0000f),Vector3D(404.9962f,27.0038f,0.0000f),Vector3D(404.9400f,17.9400f,0.0000f),Vector3D(449.9400f,26.9400f,0.0000f),Vector3D(449.9962f,31.4962f,0.0000f),Vector3D(432.0038f,31.4962f,0.0000f),Vector3D(432.0038f,26.9962f,0.0000f),Vector3D(427.5038f,26.9962f,0.0000f),Vector3D(427.5038f,18.0038f,0.0000f),Vector3D(432.0038f,18.0038f,0.0000f),Vector3D(432.0038f,13.5038f,0.0000f),Vector3D(445.5038f,13.5038f,0.0000f),Vector3D(445.5038f,4.4962f,0.0000f),Vector3D(436.4962f,4.4962f,0.0000f),Vector3D(436.4962f,8.9962f,0.0000f),Vector3D(427.5038f,8.9962f,0.0000f),Vector3D(427.5038f,4.5038f,0.0000f),Vector3D(432.0038f,4.5038f,0.0000f),Vector3D(432.0038f,0.0037f,0.0000f),Vector3D(449.9962f,0.0037f,0.0000f),Vector3D(449.9962f,4.5038f,0.0000f),Vector3D(454.4962f,4.5038f,0.0000f),Vector3D(454.4962f,13.4962f,0.0000f),Vector3D(449.9962f,13.4962f,0.0000f),Vector3D(449.9962f,18.0038f,0.0000f),Vector3D(436.4962f,17.9962f,0.0000f),Vector3D(436.4962f,27.0038f,0.0000f),Vector3D(445.5038f,27.0038f,0.0000f),Vector3D(445.5038f,22.5038f,0.0000f),Vector3D(454.4962f,22.5038f,0.0000f),Vector3D(454.4962f,26.9962f,0.0000f),Vector3D(467.9400f,0.0000f,0.0000f),Vector3D(467.9962f,8.9962f,0.0000f),Vector3D(459.0038f,8.9962f,0.0000f),Vector3D(459.0038f,0.0037f,0.0000f),Vector3D(481.4400f,0.0000f,0.0000f),Vector3D(481.4962f,8.9962f,0.0000f),Vector3D(472.5038f,8.9962f,0.0000f),Vector3D(472.5038f,0.0037f,0.0000f),Vector3D(494.9400f,0.0000f,0.0000f),Vector3D(494.9962f,8.9962f,0.0000f),Vector3D(486.0038f,8.9962f,0.0000f),Vector3D(486.0038f,0.0037f,0.0000f)};
	IndexGroup basisIndexes[212] = {IndexGroup(0,3,2),IndexGroup(7,6,9),IndexGroup(24,23,22),IndexGroup(55,45,44),IndexGroup(64,59,58),IndexGroup(78,73,72),IndexGroup(84,83,82),IndexGroup(105,104,117),IndexGroup(123,122,125),IndexGroup(149,139,138),IndexGroup(158,153,152),IndexGroup(168,163,162),IndexGroup(172,175,174),IndexGroup(218,195,194),IndexGroup(70,69,68),IndexGroup(224,223,222),IndexGroup(228,227,226),IndexGroup(232,231,230),IndexGroup(71,70,68),IndexGroup(225,224,222),IndexGroup(229,228,226),IndexGroup(233,232,230),IndexGroup(4,3,0),IndexGroup(10,9,19),IndexGroup(10,19,20),IndexGroup(20,12,11),IndexGroup(12,15,14),IndexGroup(21,16,15),IndexGroup(17,16,21),IndexGroup(18,6,17),IndexGroup(9,6,18),IndexGroup(15,12,20),IndexGroup(22,26,25),IndexGroup(38,27,26),IndexGroup(37,28,27),IndexGroup(28,41,42),IndexGroup(42,30,29),IndexGroup(30,33,32),IndexGroup(34,33,43),IndexGroup(40,35,34),IndexGroup(37,36,35),IndexGroup(26,22,39),IndexGroup(35,40,41),IndexGroup(42,43,33),IndexGroup(41,28,37),IndexGroup(47,46,45),IndexGroup(56,48,47),IndexGroup(49,48,56),IndexGroup(49,52,51),IndexGroup(53,52,57),IndexGroup(54,44,53),IndexGroup(56,57,52),IndexGroup(47,45,55),IndexGroup(61,60,59),IndexGroup(61,59,64),IndexGroup(64,63,62),IndexGroup(66,65,58),IndexGroup(73,78,77),IndexGroup(75,74,77),IndexGroup(80,79,72),IndexGroup(103,100,85),IndexGroup(86,85,100),IndexGroup(86,89,88),IndexGroup(90,89,101),IndexGroup(101,102,91),IndexGroup(92,91,82),IndexGroup(93,92,99),IndexGroup(93,98,97),IndexGroup(95,94,97),IndexGroup(100,101,89),IndexGroup(84,82,102),IndexGroup(91,102,82),IndexGroup(105,108,107),IndexGroup(116,113,109),IndexGroup(109,113,111),IndexGroup(113,112,111),IndexGroup(113,116,115),IndexGroup(117,116,108),IndexGroup(117,104,119),IndexGroup(120,119,104),IndexGroup(126,125,135),IndexGroup(126,135,136),IndexGroup(136,128,127),IndexGroup(129,128,131),IndexGroup(137,132,131),IndexGroup(133,132,137),IndexGroup(134,122,133),IndexGroup(125,122,134),IndexGroup(131,128,136),IndexGroup(141,140,139),IndexGroup(150,142,141),IndexGroup(143,142,150),IndexGroup(144,143,146),IndexGroup(147,146,151),IndexGroup(148,138,147),IndexGroup(150,151,146),IndexGroup(141,139,149),IndexGroup(154,153,157),IndexGroup(157,156,155),IndexGroup(158,157,153),IndexGroup(160,159,152),IndexGroup(165,164,163),IndexGroup(165,163,168),IndexGroup(168,167,166),IndexGroup(170,169,162),IndexGroup(172,189,176),IndexGroup(189,188,177),IndexGroup(187,178,177),IndexGroup(178,193,190),IndexGroup(179,190,181),IndexGroup(181,190,191),IndexGroup(192,183,182),IndexGroup(192,193,184),IndexGroup(185,184,187),IndexGroup(193,178,187),IndexGroup(195,218,217),IndexGroup(217,197,196),IndexGroup(198,197,200),IndexGroup(216,201,200),IndexGroup(202,201,216),IndexGroup(202,214,211),IndexGroup(204,203,210),IndexGroup(204,209,208),IndexGroup(206,205,208),IndexGroup(211,210,203),IndexGroup(212,211,214),IndexGroup(215,214,202),IndexGroup(197,217,216),IndexGroup(220,219,194),IndexGroup(5,4,0),IndexGroup(11,10,20),IndexGroup(13,12,14),IndexGroup(18,17,21),IndexGroup(19,9,18),IndexGroup(21,15,20),IndexGroup(24,22,25),IndexGroup(39,38,26),IndexGroup(38,37,27),IndexGroup(29,28,42),IndexGroup(31,30,32),IndexGroup(43,40,34),IndexGroup(30,42,33),IndexGroup(35,41,37),IndexGroup(55,56,47),IndexGroup(50,49,51),IndexGroup(57,54,53),IndexGroup(49,56,52),IndexGroup(62,61,64),IndexGroup(67,66,58),IndexGroup(74,73,77),IndexGroup(76,75,77),IndexGroup(81,80,72),IndexGroup(84,103,85),IndexGroup(87,86,88),IndexGroup(90,101,91),IndexGroup(99,92,82),IndexGroup(98,93,99),IndexGroup(94,93,97),IndexGroup(96,95,97),IndexGroup(86,100,89),IndexGroup(103,84,102),IndexGroup(106,105,107),IndexGroup(108,116,109),IndexGroup(110,109,111),IndexGroup(114,113,115),IndexGroup(105,117,108),IndexGroup(118,117,119),IndexGroup(121,120,104),IndexGroup(127,126,136),IndexGroup(130,129,131),IndexGroup(134,133,137),IndexGroup(135,125,134),IndexGroup(137,131,136),IndexGroup(149,150,141),IndexGroup(145,144,146),IndexGroup(151,148,147),IndexGroup(143,150,146),IndexGroup(155,154,157),IndexGroup(161,160,152),IndexGroup(166,165,168),IndexGroup(171,170,162),IndexGroup(175,172,176),IndexGroup(176,189,177),IndexGroup(188,187,177),IndexGroup(179,178,190),IndexGroup(180,179,181),IndexGroup(182,181,191),IndexGroup(191,192,182),IndexGroup(183,192,184),IndexGroup(186,185,187),IndexGroup(184,193,187),IndexGroup(196,195,217),IndexGroup(199,198,200),IndexGroup(215,202,216),IndexGroup(203,202,211),IndexGroup(209,204,210),IndexGroup(205,204,208),IndexGroup(207,206,208),IndexGroup(213,212,214),IndexGroup(200,197,216),IndexGroup(221,220,194),IndexGroup(1,0,2),IndexGroup(8,7,9),IndexGroup(54,55,44),IndexGroup(65,64,58),IndexGroup(79,78,72),IndexGroup(124,123,125),IndexGroup(148,149,138),IndexGroup(159,158,152),IndexGroup(169,168,162),IndexGroup(173,172,174),IndexGroup(219,218,194)};
	TriangleGroup triangleGroup = TriangleGroup(&basisVertices[0], &basisIndexes[0], 234, 212);
	SimpleMaterial simpleMaterial = SimpleMaterial(RGBColor(128, 128, 128));
	Object3D basisObj = Object3D(&triangleGroup, &simpleMaterial);

public:
	LoadingModules(){}

	Object3D* GetObject(){
		return &basisObj;
	}
};
