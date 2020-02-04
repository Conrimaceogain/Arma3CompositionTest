/*
Exporter une composition :
1 - sélectionnez les objets de la composition dans 3DEN
2 - ouvrez la console de debug dans 3DEN
3 - exécutez la commande ci dessous :
[(screenToWorld [0.5,0.5]),(get3DENSelected "object")] call BIS_fnc_exportCfgGroups;
Le premier paramètre correspond au centre de la compositions. La position des objets est calculée en fonction de ce centre. Ce centre correspond à la position du pointeur souris au moment où vous cliquez pour créer la composition.
Dans le cas ci-dessus, le centre choisi est le centre de votre écran.
4 - collez le contenu qui du presse papier au bon endroit dans la config.
*/


class CfgPatches
{
	class rrcc_compositions
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_3DEN","3DEN"};
	};
};

class CfgGroups
{
	class Empty
	{
		side = 8;
		name = "Compositions"
		class RRCC
		{
			name = "RRCC";
			class RRCC_COMP // Catégorie de classement (possible d'en ajouter d'autres)
			{
				name = "RRCC_COMP"; // Nom de la catégorie	
				class base
				{
					name = "Base";
					side = 8;
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					class Object0	{side = 8; vehicle = "Land_HBarrier_01_big_tower_green_F"; rank = ""; position[] = {14.6789,-28.3159,-0.000457764}; dir = 40.5714;};
					class Object1	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {12.0567,-13.0325,-0.0514832}; dir = 300.594;};
					class Object2	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {15.5432,-5.57666,-0.0687256}; dir = 295.616;};
					class Object3	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {18.5362,2.12158,-0.0823517}; dir = 294.331;};
					class Object4	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {20.866,-33.5864,-0.0758209}; dir = 221.901;};
					class Object5	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {57.0101,-32.3394,-0.158661}; dir = 131.15;};
					class Object6	{side = 8; vehicle = "Land_HBarrier_01_wall_4_green_F"; rank = ""; position[] = {10.5131,-23.7563,0.00163269}; dir = 217.071;};
					class Object7	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {8.37527,-20.5425,-0.0438538}; dir = 297.999;};
					class Object8	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {62.4106,-25.7249,-0.136185}; dir = 131.235;};
					class Object9	{side = 8; vehicle = "Land_HBarrier_01_big_tower_green_F"; rank = ""; position[] = {66.6029,-20.1965,0.0193176}; dir = 294.372;};
					class Object10	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {65.117,-13.8315,0.0713806}; dir = 61.278;};
					class Object11	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {59.4107,-7.42798,0.0966492}; dir = 43.9438;};
					class Object12	{side = 8; vehicle = "Land_HBarrier_01_big_tower_green_F"; rank = ""; position[] = {27.3528,36.9443,0.021286}; dir = 164.995;};
					class Object13	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {52.8987,-2.46191,0.0982361}; dir = 37.2464;};
					class Object14	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {46.9838,2.69434,0.0979156}; dir = 49.0658;};
					class Object15	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {42.1271,8.98584,0.0691223}; dir = 60.0189;};
					class Object16	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {39.5036,16.2744,0.122086}; dir = 81.3901;};
					class Object17	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {37.9917,24.3442,0.154846}; dir = 81.5063;};
					class Object18	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {20.5258,9.896,-0.0996094}; dir = 275.393;};
					class Object19	{side = 8; vehicle = "Land_HBarrier_01_big_4_green_F"; rank = ""; position[] = {30.2353,-40.5959,0.0149384}; dir = 218.01;};
					class Object20	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {19.9106,17.8384,-0.0879822}; dir = 257.082;};
					class Object21	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {17.817,25.8984,-0.0900421}; dir = 256.889;};
					class Object22	{side = 8; vehicle = "Land_HBarrier_01_wall_corner_green_F"; rank = ""; position[] = {33.4236,37.353,0.0112305}; dir = 346.45;};
					class Object23	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {36.4169,32.5098,0.19191}; dir = 77.0665;};
					class Object24	{side = 8; vehicle = "Land_HBarrier_01_wall_corner_green_F"; rank = ""; position[] = {17.3559,31.9565,0.00773621}; dir = 256.777;};
					class Object25	{side = 8; vehicle = "Land_HBarrier_01_wall_4_green_F"; rank = ""; position[] = {21.7316,33.9106,0.00930786}; dir = 342.544;};
					class Object26	{side = 8; vehicle = "Land_HBarrier_01_wall_corner_green_F"; rank = ""; position[] = {26.0476,-35.6021,0.00447083}; dir = 129.667;};
					class Object27	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {51.5451,-38.6782,-0.193527}; dir = 135.5;};
					class Object28	{side = 8; vehicle = "Land_HBarrier_01_big_4_green_F"; rank = ""; position[] = {45.7211,-45.5544,0.0246887}; dir = 127.456;};
					class Object29	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {46.2009,-38.9836,-0.152222}; dir = 219.337;};
					class Object30	{side = 8; vehicle = "Land_HBarrier_01_wall_6_green_F"; rank = ""; position[] = {31.4048,-30.2158,-0.0538635}; dir = 126.724;};
					class Object31	{side = 8; vehicle = "Land_HBarrier_01_big_4_green_F"; rank = ""; position[] = {39.4575,-50.915,0.0153503}; dir = 334.748;};
					class Object32	{side = 8; vehicle = "Land_HBarrier_01_big_4_green_F"; rank = ""; position[] = {28.8644,-44.6545,0.00318909}; dir = 341.9;};
					class Object33	{side = 8; vehicle = "Land_Stretcher_01_F"; rank = ""; position[] = {40.5932,-5.79907,0.0754242}; dir = 308.215;};
					class Object34	{side = 8; vehicle = "Land_Stretcher_01_F"; rank = ""; position[] = {39.5504,-6.91406,0.0466156}; dir = 126.021;};
					class Object35	{side = 8; vehicle = "Land_Stretcher_01_F"; rank = ""; position[] = {42.5791,-3.43066,0.0750732}; dir = 308.267;};
					class Object36	{side = 8; vehicle = "Land_Stretcher_01_F"; rank = ""; position[] = {43.5255,-2.04297,0.0671997}; dir = 306.317;};
					class Object37	{side = 8; vehicle = "Land_Stretcher_01_F"; rank = ""; position[] = {43.7472,-8.27734,0.0634766}; dir = 308.204;};
					class Object38	{side = 8; vehicle = "Land_Stretcher_01_F"; rank = ""; position[] = {45.7182,-6.04395,-0.0071106}; dir = 308.204;};
					class Object39	{side = 8; vehicle = "Land_Stretcher_01_F"; rank = ""; position[] = {46.6122,-4.64136,-0.00788879}; dir = 308.267;};
					class Object40	{side = 8; vehicle = "Land_Stretcher_01_F"; rank = ""; position[] = {46.894,-10.7302,-0.00700378}; dir = 308.204;};
					class Object41	{side = 8; vehicle = "Land_Stretcher_01_F"; rank = ""; position[] = {49.614,-7.09619,-0.0195923}; dir = 308.12;};
					class Object42	{side = 8; vehicle = "Land_Stretcher_01_F"; rank = ""; position[] = {48.585,-8.31226,-0.0207367}; dir = 305.166;};
					class Object43	{side = 8; vehicle = "Land_Stretcher_01_F"; rank = ""; position[] = {46.1149,-11.8596,-0.0118866}; dir = 308.215;};
					class Object44	{side = 8; vehicle = "Land_Stretcher_01_F"; rank = ""; position[] = {42.912,-9.42261,0.030304}; dir = 308.215;};
					class Object45	{side = 8; vehicle = "ACE_medicalSupplyCrate_advanced"; rank = ""; position[] = {45.7084,-2.68994,0.803436}; dir = 216.953;};
					class Object46	{side = 8; vehicle = "ACE_medicalSupplyCrate_advanced"; rank = ""; position[] = {48.9409,-5.11719,0.786942}; dir = 210.15;};
					class Object47	{side = 8; vehicle = "ACE_medicalSupplyCrate"; rank = ""; position[] = {41.2697,-4.39526,0.877014}; dir = 126.052;};
					class Object48	{side = 8; vehicle = "ACE_medicalSupplyCrate"; rank = ""; position[] = {48.1493,-9.89795,0.780121}; dir = 308.704;};
					class Object49	{side = 8; vehicle = "KAT_medicalSupplyCrate"; rank = ""; position[] = {44.484,-6.9729,0.824356}; dir = 309.137;};
					class Object50	{side = 8; vehicle = "FoldTable"; rank = ""; position[] = {45.0493,-7.46143,-0.0032196}; dir = 308.398;};
					class Object51	{side = 8; vehicle = "FoldTable"; rank = ""; position[] = {44.412,-6.93799,0.0275726}; dir = 308.398;};
					class Object52	{side = 8; vehicle = "FoldTable"; rank = ""; position[] = {48.1984,-9.90259,-0.0124512}; dir = 308.315;};
					class Object53	{side = 8; vehicle = "FoldTable"; rank = ""; position[] = {41.2566,-4.37231,0.0760956}; dir = 308.461;};
					class Object54	{side = 8; vehicle = "FoldTable"; rank = ""; position[] = {45.7639,-2.62402,0.0035553}; dir = 220.735;};
					class Object55	{side = 8; vehicle = "FoldTable"; rank = ""; position[] = {48.9153,-5.1709,-0.0120697}; dir = 213.058;};
					class Object56	{side = 8; vehicle = "KAT_medicalSupplyCrate"; rank = ""; position[] = {45.0286,-7.43628,0.79805}; dir = 129.688;};
					class Object57	{side = 8; vehicle = "B_Slingload_01_Repair_F"; rank = ""; position[] = {53.6365,-31.4304,0.0351105}; dir = 36.4967;};
					class Object58	{side = 8; vehicle = "Land_ConnectorTent_01_floor_dark_F"; rank = ""; position[] = {42.7578,-5.35938,0.0692444}; dir = 305.972;};
					class Object59	{side = 0; vehicle = "rhs_rva_crew"; rank = "PRIVATE"; position[] = {41.2038,-16.2952,-0.0035553}; dir = 0;};
					class Object60	{side = 8; vehicle = "CamoNet_BLUFOR_open_F"; rank = ""; position[] = {44.1088,-6.99927,-0.0432129}; dir = 36.931;};
					class Object61	{side = 8; vehicle = "Land_MedicalTent_01_NATO_tropic_generic_open_F"; rank = ""; position[] = {25.0816,-26.5786,0.00413513}; dir = 34.2486;};
					class Object62	{side = 8; vehicle = "CamoNet_BLUFOR_open_F"; rank = ""; position[] = {22.8344,-6.95581,-0.0169067}; dir = 119.523;};
					class Object63	{side = 8; vehicle = "Land_ConnectorTent_01_floor_dark_F"; rank = ""; position[] = {22.9217,-9.0957,-0.00416565}; dir = 27.1023;};
					class Object64	{side = 8; vehicle = "Land_ConnectorTent_01_floor_dark_F"; rank = ""; position[] = {24.854,-5.43237,-0.00416565}; dir = 27.3458;};
					class Object65	{side = 8; vehicle = "FoldTable"; rank = ""; position[] = {22.4843,-12.9658,0.00105286}; dir = 207.914;};
					class Object66	{side = 8; vehicle = "FoldTable"; rank = ""; position[] = {20.5417,-11.9663,-0.000335693}; dir = 25.6438;};
					class Object67	{side = 8; vehicle = "FoldTable"; rank = ""; position[] = {19.6424,-9.97754,-0.000335693}; dir = 295.833;};
					class Object68	{side = 8; vehicle = "FoldTable"; rank = ""; position[] = {20.6299,-7.93433,-0.000289917}; dir = 115.961;};
					class Object69	{side = 8; vehicle = "FoldTable"; rank = ""; position[] = {22.3015,-5.04272,-0.00221252}; dir = 115.984;};
					class Object70	{side = 8; vehicle = "FoldTable"; rank = ""; position[] = {23.3863,-3.0083,-0.00222778}; dir = 115.984;};
					class Object71	{side = 8; vehicle = "FoldTable"; rank = ""; position[] = {25.314,-2.28809,-0.00146484}; dir = 22.9697;};
					class Object72	{side = 8; vehicle = "FoldTable"; rank = ""; position[] = {27.332,-3.17676,-0.00137329}; dir = 24.2513;};
					class Object73	{side = 8; vehicle = "FoldTable"; rank = ""; position[] = {22.9407,-7.08936,0.000244141}; dir = 27.7281;};
					class Object74	{side = 8; vehicle = "FoldTable"; rank = ""; position[] = {24.9662,-8.16895,0.000228882}; dir = 28.6019;};
					class Object75	{side = 8; vehicle = "Land_ConnectorTent_01_floor_dark_F"; rank = ""; position[] = {45.505,-7.81836,-0.0146179}; dir = 302.981;};
					class Object76	{side = 8; vehicle = "Land_ConnectorTent_01_floor_dark_F"; rank = ""; position[] = {25.2402,-26.5962,0.00376892}; dir = 214.496;};
					class Object77	{side = 8; vehicle = "RHS_ZU23_MSV"; rank = ""; position[] = {34.1831,-15.7834,0.0161896}; dir = 83.3269;};
					class Object78	{side = 8; vehicle = "Land_BagFence_01_round_green_F"; rank = ""; position[] = {31.201,-15.9192,0.00332642}; dir = 76.4554;};
					class Object79	{side = 8; vehicle = "Land_BagFence_01_round_green_F"; rank = ""; position[] = {34.6473,-18.3132,0.000442505}; dir = 352.236;};
					class Object80	{side = 8; vehicle = "Land_BagFence_01_round_green_F"; rank = ""; position[] = {37.0261,-15.1282,-0.000900269}; dir = 256.125;};
					class Object81	{side = 8; vehicle = "Land_BagFence_01_round_green_F"; rank = ""; position[] = {33.6455,-12.6492,0.00221252}; dir = 174.03;};
					class Object82	{side = 8; vehicle = "Land_BagFence_01_short_green_F"; rank = ""; position[] = {35.6147,-13.3167,0.00138855}; dir = 217.327;};
					class Object83	{side = 8; vehicle = "Land_BagFence_01_short_green_F"; rank = ""; position[] = {31.915,-13.8267,0.00109863}; dir = 312.408;};
					class Object84	{side = 8; vehicle = "Land_BagFence_01_short_green_F"; rank = ""; position[] = {36.0972,-17.0676,0.98407}; dir = 125.295;};
					class Object85	{side = 8; vehicle = "Land_BagFence_01_short_green_F"; rank = ""; position[] = {32.6309,-17.6565,0.00131226}; dir = 215.955;};
					class Object86	{side = 8; vehicle = "Box_EAF_Ammo_F"; rank = ""; position[] = {36.3916,-16.0637,0.00241089}; dir = 30.036;};
					class Object87	{side = 8; vehicle = "Box_EAF_Ammo_F"; rank = ""; position[] = {35.9927,-16.6821,0.00241089}; dir = 30.036;};
					class Object88	{side = 8; vehicle = "Box_EAF_Ammo_F"; rank = ""; position[] = {35.5834,-17.2971,0.00241089}; dir = 30.036;};
					class Object89	{side = 8; vehicle = "Land_BagFence_01_short_green_F"; rank = ""; position[] = {20.9395,-20.4346,0.0018158}; dir = 132.371;};
					class Object90	{side = 8; vehicle = "Land_BagFence_01_round_green_F"; rank = ""; position[] = {19.0447,-21.6626,-0.00109863}; dir = 352.834;};
					class Object91	{side = 8; vehicle = "Land_BagFence_01_round_green_F"; rank = ""; position[] = {21.8248,-18.4922,-0.000244141}; dir = 268.903;};
					class Object92	{side = 8; vehicle = "Land_BagFence_01_round_green_F"; rank = ""; position[] = {18.9365,-15.7712,0.00286865}; dir = 172.699;};
					class Object93	{side = 8; vehicle = "Land_BagFence_01_round_green_F"; rank = ""; position[] = {16.081,-18.8486,0.00131226}; dir = 90.7016;};
					class Object94	{side = 8; vehicle = "Land_BagFence_01_short_green_F"; rank = ""; position[] = {16.984,-16.967,0.00169373}; dir = 133.857;};
					class Object95	{side = 8; vehicle = "Land_BagFence_01_short_green_F"; rank = ""; position[] = {17.0584,-20.7148,0.000823975}; dir = 229.095;};
					class Object96	{side = 8; vehicle = "Land_BagFence_01_short_green_F"; rank = ""; position[] = {20.9225,-16.6648,0.000930786}; dir = 41.9105;};
					class Object97	{side = 8; vehicle = "TEC_O_WD_Mortar_01_F"; rank = ""; position[] = {18.8734,-19.3367,0.0020752}; dir = 0;};
					class Object98	{side = 8; vehicle = "ACE_Box_82mm_Mo_HE"; rank = ""; position[] = {19.5427,-16.4744,0.817963}; dir = 312.308;};
					class Object99	{side = 8; vehicle = "ACE_Box_82mm_Mo_HE"; rank = ""; position[] = {20.0599,-16.9807,0.167755}; dir = 312.33;};
					class Object100	{side = 8; vehicle = "ACE_Box_82mm_Mo_HE"; rank = ""; position[] = {20.6186,-17.4707,0.129288}; dir = 286.349;};
					class Object101	{side = 8; vehicle = "Land_MedicalTent_01_NATO_tropic_generic_open_F"; rank = ""; position[] = {28.9948,21.4644,0.00686646}; dir = 163.859;};
					class Object102	{side = 8; vehicle = "RHS_Ural_Repair_MSV_01"; rank = ""; position[] = {51.9897,-12.5232,0.0259094}; dir = 221.976;};
					class Object103	{side = 8; vehicle = "RHS_Ural_Open_Flat_MSV_01"; rank = ""; position[] = {55.3,-15.1738,0.0303192}; dir = 222.583;};
					class Object104	{side = 8; vehicle = "RHS_Ural_Flat_MSV_01"; rank = ""; position[] = {58.6902,-18.0723,0.0346069}; dir = 219.141;};
					class Object105	{side = 8; vehicle = "LOP_ChDKZ_UAZ_DshKM"; rank = ""; position[] = {55.7765,-23.9683,0.0234222}; dir = 305.714;};
					class Object106	{side = 8; vehicle = "LOP_ChDKZ_UAZ_DshKM"; rank = ""; position[] = {54.1693,-26.2954,0.0218048}; dir = 305.772;};
					class Object107	{side = 8; vehicle = "LOP_ChDKZ_UAZ_Open"; rank = ""; position[] = {47.6143,-35.1497,0.0197601}; dir = 304.482;};
					class Object108	{side = 8; vehicle = "LOP_ChDKZ_UAZ_Open"; rank = ""; position[] = {48.3805,-31.1487,0.020874}; dir = 304.445;};
					class Object109	{side = 8; vehicle = "LOP_ChDKZ_UAZ_Open"; rank = ""; position[] = {50.1327,-28.7329,0.0339203}; dir = 304.217;};
					class Object110	{side = 8; vehicle = "Land_ConnectorTent_01_floor_dark_F"; rank = ""; position[] = {29.0055,21.5156,0.000305176}; dir = 163.961;};
					class Object111	{side = 8; vehicle = "CUP_vojenska_palanda"; rank = ""; position[] = {31.4777,18.3003,0}; dir = 251.022;};
					class Object112	{side = 8; vehicle = "CUP_vojenska_palanda"; rank = ""; position[] = {31.0276,20.5688,0}; dir = 251.164;};
					class Object113	{side = 8; vehicle = "CUP_vojenska_palanda"; rank = ""; position[] = {30.0676,25.6265,0}; dir = 74.5385;};
					class Object114	{side = 8; vehicle = "CUP_vojenska_palanda"; rank = ""; position[] = {30.1074,23.2476,0}; dir = 251.164;};
					class Object115	{side = 8; vehicle = "CUP_vojenska_palanda"; rank = ""; position[] = {27.802,17.2559,0}; dir = 251.022;};
					class Object116	{side = 8; vehicle = "CUP_vojenska_palanda"; rank = ""; position[] = {27.0179,19.4219,0}; dir = 251.022;};
					class Object117	{side = 8; vehicle = "CUP_vojenska_palanda"; rank = ""; position[] = {26.0536,21.9092,0}; dir = 258.34;};
					class Object118	{side = 8; vehicle = "CUP_vojenska_palanda"; rank = ""; position[] = {25.2617,24.5874,0}; dir = 257.248;};
					class Object119	{side = 8; vehicle = "CUP_vojenska_palanda"; rank = ""; position[] = {24.6,-31.22,0}; dir = 132.609;};
					class Object120	{side = 8; vehicle = "CUP_vojenska_palanda"; rank = ""; position[] = {29.1918,-24.9653,0}; dir = 126.342;};
					class Object121	{side = 8; vehicle = "CUP_vojenska_palanda"; rank = ""; position[] = {27.8543,-26.8411,0}; dir = 126.342;};
					class Object122	{side = 8; vehicle = "CUP_vojenska_palanda"; rank = ""; position[] = {26.3547,-29.0474,0}; dir = 133.563;};
					class Object123	{side = 8; vehicle = "CUP_vojenska_palanda"; rank = ""; position[] = {21.0155,-27.8545,0}; dir = 310.123;};
					class Object124	{side = 8; vehicle = "CUP_vojenska_palanda"; rank = ""; position[] = {22.9509,-26.4707,0}; dir = 126.453;};
					class Object125	{side = 8; vehicle = "CUP_vojenska_palanda"; rank = ""; position[] = {24.6331,-24.1919,0}; dir = 126.483;};
					class Object126	{side = 8; vehicle = "CUP_vojenska_palanda"; rank = ""; position[] = {26.2447,-22.5332,0}; dir = 126.342;};
					class Object127	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {42.1001,-51.7297,-0.0107269}; dir = 148.698;};
					class Object128	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {49.0392,-46.1138,0.12706}; dir = 132.733;};
					class Object129	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {55.2192,-39.3931,0.120041}; dir = 128.41;};
					class Object130	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {61.1735,-32.7327,0.10379}; dir = 126.215;};
					class Object131	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {68.5074,-26.9587,0.0306854}; dir = 148.703;};
					class Object132	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {70.4879,-14.3186,0.268005}; dir = 39.3428;};
					class Object133	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {65.1958,-8.21021,0.217163}; dir = 56.1628;};
					class Object134	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {58.9457,-2.98145,0.197845}; dir = 34.9684;};
					class Object135	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {52.0895,1.43506,0.17337}; dir = 36.275;};
					class Object136	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {46.5124,7.23242,0.12941}; dir = 51.4947;};
					class Object137	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {42.8282,14.8672,0.116669}; dir = 67.5367;};
					class Object138	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {41.5196,22.8091,0.111984}; dir = 81.5048;};
					class Object139	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {40.1052,29.3252,0.0583496}; dir = 77.8108;};
					class Object140	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {38.4859,37.6416,0.0247345}; dir = 77.1277;};
					class Object141	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {32.9392,40.8843,-0.300873}; dir = 348.092;};
					class Object142	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {30.5767,45.6187,-0.0824127}; dir = 80.826;};
					class Object143	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {21.2758,43.4092,-0.166428}; dir = 80.5812;};
					class Object144	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {16.61,49.3813,-0.315521}; dir = 45.8774;};
					class Object145	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {13.2875,50.0293,0.355713}; dir = 202.609;};
					class Object146	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {16.9071,36.3301,-0.201904}; dir = 343.096;};
					class Object147	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {14.0745,29.1646,0.111847}; dir = 257.005;};
					class Object148	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {15.9889,21.6763,0.0822754}; dir = 252.212;};
					class Object149	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {17.4775,13.8726,0.0154877}; dir = 259.691;};
					class Object150	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {17.1644,7.40967,-0.0531006}; dir = 273.602;};
					class Object151	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {14.7607,-0.52002,-0.0895081}; dir = 288.48;};
					class Object152	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {11.448,-7.78442,-0.103409}; dir = 292.74;};
					class Object153	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {7.93732,-15.8132,-0.100739}; dir = 289.815;};
					class Object154	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {3.29251,-22.3313,-0.109482}; dir = 305.018;};
					class Object155	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {6.733,-28.355,-0.0187683}; dir = 228.694;};
					class Object156	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {12.6273,-33.9119,-0.0389099}; dir = 222.455;};
					class Object157	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {20.4565,-36.925,-0.0744324}; dir = 193.152;};
					class Object158	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {22.486,-40.3423,0.137527}; dir = 81.3671;};
					class Object159	{side = 8; vehicle = "Land_Razorwire_F"; rank = ""; position[] = {2.43753,50.2383,-0.167084}; dir = 340.687;};					
				};
			};
		};
	};
};
