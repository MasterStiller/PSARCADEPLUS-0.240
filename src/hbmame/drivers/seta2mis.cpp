// Proyecto Shadows Arcade Plus+
// copyright-holders:Gaston90

 /********************************************
        Proyecto Shadows Arcade Plus+
**********************************************/

 /*********
 Guardians
************/

ROM_START( grdiansla01 ) //grdiansy
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "u2_la01.bin", 0x000000, 0x080000, CRC(04b90809) SHA1(7c8ab1038b6ec7108003a7b1a3fbb1a7acffafa2) )
	ROM_LOAD16_BYTE( "u3_la01.bin", 0x000001, 0x080000, CRC(4a91c87a) SHA1(ff0937d6adc629e6e61eb831cc567380b94757c8) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdiansla02 ) //grdianske
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "u2_la02.bin", 0x000000, 0x080000, CRC(0100e4cc) SHA1(6c8d1af6d62ecd8e3a62b5efff9bab3133d61132) )
	ROM_LOAD16_BYTE( "u3_la02.bin", 0x000001, 0x080000, CRC(fca6c50b) SHA1(9064607bc3424b9b5c9499495f61682659d87646) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdiansla03 ) //grdianslbs
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "u2_la03.bin", 0x000000, 0x080000, CRC(3edaca8a) SHA1(db83ead70042df6d1e785e1f809470b1cba9c822) )
	ROM_LOAD16_BYTE( "u3_la03.bin", 0x000001, 0x080000, CRC(c3bc27da) SHA1(99d2788e53993c7f5bbb2104fc247ae2a0ab29fb) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdiansla04 ) //grdianslbss
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "u2_la04.bin", 0x000000, 0x080000, CRC(6971d2a2) SHA1(578bd1d2dfee98367f9d1b6fb318cd015c536dc4) )
	ROM_LOAD16_BYTE( "u3_la04.bin", 0x000001, 0x080000, CRC(dfd042e0) SHA1(846cc3e0e1d6081a4b1f81f5166b8a0b676532e4) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdiansla05 ) //grdianssy
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "u2_la05.bin", 0x000000, 0x080000, CRC(fbf79fbd) SHA1(2b3dba9993fc638bb71caaa2e219d48459d4c18f) )
	ROM_LOAD16_BYTE( "u3_la05.bin", 0x000001, 0x080000, CRC(f64b4a06) SHA1(2e6b44a4b07ab36d8aeb296e72b60d63473885e4) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdiansla06 ) //grdianske
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "u2_la06.bin", 0x000000, 0x080000, CRC(96641e2a) SHA1(2290bcf0159c28473da81006ccf6bf288c094b51) )
	ROM_LOAD16_BYTE( "u3_la06.bin", 0x000001, 0x080000, CRC(eaf8363c) SHA1(63a6e143c1aff4675e20dfcc54b7d129097da868) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdiansla07 ) //grdianslbs
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "u2_la07.bin", 0x000000, 0x080000, CRC(eb1c72f6) SHA1(0ef8e3ce4e8c708dc50166ebf42f1a0831127926) )
	ROM_LOAD16_BYTE( "u3_la07.bin", 0x000001, 0x080000, CRC(94210eb8) SHA1(c7b50f2debb990a70f078339b672d99ffea25d96) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdiansla08 ) //grdianslbss
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "u2_la08.bin", 0x000000, 0x080000, CRC(e8c9fb0f) SHA1(bb40479b279ccfda002993116d9bac9fc05d078c) )
	ROM_LOAD16_BYTE( "u3_la08.bin", 0x000001, 0x080000, CRC(d4dac047) SHA1(b16fa94b2d0c93f5037cb401ef43e96df3858d84) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdiansla09 ) //grdiansplus
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "u2_la09.bin", 0x000000, 0x080000, CRC(3e278ad9) SHA1(03eda8913518e3fff065acb2ecd1c4adf5aee34d) )
	ROM_LOAD16_BYTE( "u3_la09.bin", 0x000001, 0x080000, CRC(d27eccd0) SHA1(e01bb24a66261585777072956770bf4543ff87bb) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

/*    YEAR  NAME            PARENT    MACHINE        INPUT       INIT             MONITOR COMPANY                 FULLNAME FLAGS */
// Guardians
GAME( 2018, grdiansla01,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (Warriors Edition 2020-11-09)", MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2021, grdiansla02,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (Kerron Edition 2021-04-12)", MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2021, grdiansla03,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (LBS Edition 2021-04-04)", MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2021, grdiansla04,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (Field Edition 2021-04-12)", MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2021, grdiansla05,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (Shen Yue Edition 2021-04-02)", MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2021, grdiansla06,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (Kerron Edition 2021-04-28)", MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2021, grdiansla07,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (LBS Edition 2021-07-19)", MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2021, grdiansla08,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (Field Edition 2021-04-28)", MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2021, grdiansla09,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (Plus 2021-03-27)", MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )

