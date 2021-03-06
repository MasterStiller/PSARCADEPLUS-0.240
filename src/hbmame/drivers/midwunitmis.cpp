// Proyecto Shadows Arcade Plus+
// copyright-holders:Gaston90

 /********************************************
        Proyecto Shadows Arcade Plus+
**********************************************/

 /****************
 Mortal Kombat 3
*******************/

ROM_START( mk3la01 )
	ROM_REGION16_LE( 0x800000, "dcs", ROMREGION_ERASEFF )
	//ROM_LOAD16_BYTE( "l1_mortal_kombat_3_u2_music_spch.u2", 0x000000, 0x100000, CRC(5273436f) SHA1(e1735842a0159eafe79d878d44e3828df9bfa5bb) )
	ROM_LOAD16_BYTE( "l2.0_mortal_kombat_3_u2_ultimate.u2", 0x000000, 0x100000, CRC(3838cfe5) SHA1(e3d2901f3bae1362742fc6ee0aa31c9f63b4dfa3) )
	ROM_LOAD16_BYTE( "l1_mortal_kombat_3_u3_music_spch.u3", 0x200000, 0x100000, CRC(856fe411) SHA1(6165ebecfce7500e948d84492ffa19eed7f47091) )
	ROM_LOAD16_BYTE( "l1_mortal_kombat_3_u4_music_spch.u4", 0x400000, 0x100000, CRC(428a406f) SHA1(e70ec83cd054de0da1e178720ed0035b8887f797) )
	ROM_LOAD16_BYTE( "l1_mortal_kombat_3_u5_music_spch.u5", 0x600000, 0x100000, CRC(3b98a09f) SHA1(edf1d02a56dcf3349e6b4bb4097acfe7592305f4) )

	ROM_REGION16_LE( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "mk321u54_la01.bin",  0x00000, 0x80000, CRC(bf3febc8) SHA1(5fd936c73c41e27213073e696182d5adddb45005) )
	ROM_LOAD16_BYTE( "mk321u63_la01.bin",  0x00001, 0x80000, CRC(95d7a064) SHA1(5667313693c2030f9f295ef2f82380e0329d8957) )

	ROM_REGION( 0x2000000, "gfxrom", 0 )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u133_game_rom_la01.u133",  0x0000000, 0x100000, CRC(b6542432) SHA1(686761975535028cfc625f6943d4bff8cfb460a7) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u132_game_rom_la01.u132",  0x0000001, 0x100000, CRC(f7a771cd) SHA1(b427dc1d75c824582e1336d54a550663f7d8a724) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u131_game_rom_la01.u131",  0x0000002, 0x100000, CRC(c47ed51b) SHA1(5b10c326cac07b9fcea458b7e995a8f64135fe04) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u130_game_rom_la01.u130",  0x0000003, 0x100000, CRC(5b189c96) SHA1(dc494b23d4376fcddbf12ff5a57cfdc4b9c31b95) )

	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u129_game_rom.u129",  0x0400000, 0x100000, CRC(a8b41803) SHA1(9697e35e8bb51d6d36b1d7ae47377b446e57682f) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u128_game_rom.u128",  0x0400001, 0x100000, CRC(b410d72f) SHA1(ac5c1c6f744186540f4ab100d9bd4ce6007e600b) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u127_game_rom.u127",  0x0400002, 0x100000, CRC(bd985be7) SHA1(f5183abea2e5eb2c2c8cefa72c9ed321679f5128) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u126_game_rom.u126",  0x0400003, 0x100000, CRC(e7c32cf4) SHA1(94ea7b2eed7dae66f5dd676c20d6b360140e3e0e) )

	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u125_game_rom_la01.u125",  0x0800000, 0x100000, CRC(8dfb82bf) SHA1(f58a4030ff1e0aa5e7870f81dbc685ab6bd736fa) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u124_game_rom_la01.u124",  0x0800001, 0x100000, CRC(f41c6031) SHA1(13bdfe5fc2b027c2438a8474a185b5073902308d) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u123_game_rom_la01.u123",  0x0800002, 0x100000, CRC(3cae16e3) SHA1(10469fcad0de444f5249e1575cc68eff257af32f) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u122_game_rom_la01.u122",  0x0800003, 0x100000, CRC(cacb9b48) SHA1(8bc7452978d44a7b36952b4e1017ce0bd7af4186) )

	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u121_game_rom.u121",  0x0c00000, 0x100000, CRC(b6c6296a) SHA1(7b92a92d65493bb201daf5ece6f00140f017ac51) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u120_game_rom.u120",  0x0c00001, 0x100000, CRC(8d1ccc3b) SHA1(35d91c00113718a08a9d56eb04366f8cf4069ba6) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u119_game_rom.u119",  0x0c00002, 0x100000, CRC(63215b59) SHA1(709bce15fba1520bcba40f0a5cb614542f1b460f) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u118_game_rom.u118",  0x0c00003, 0x100000, CRC(8b681e34) SHA1(524104ba2eb2deb3cfae9760e6b2125ce6b6633e) )

	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u117_game_rom.u117",  0x1000000, 0x080000, CRC(1ab20377) SHA1(0c0d14464d8b23a60e0693669af2ddb82655eff8) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u116_game_rom.u116",  0x1000001, 0x080000, CRC(ba246ad0) SHA1(ec6bdd4b9cd3007bb66bb8de36d148abb30e7f11) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u115_game_rom.u115",  0x1000002, 0x080000, CRC(3ee8b124) SHA1(1523d51e36d3c336b134a562da36a29ba137c0f6) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u114_game_rom.u114",  0x1000003, 0x080000, CRC(a8d99922) SHA1(04ff8d85448701070672f44dbf5bcfd744f1bc8a) )
ROM_END

ROM_START( mk3la02 )
	ROM_REGION16_LE( 0x800000, "dcs", ROMREGION_ERASEFF )
	//ROM_LOAD16_BYTE( "l1_mortal_kombat_3_u2_music_spch.u2", 0x000000, 0x100000, CRC(5273436f) SHA1(e1735842a0159eafe79d878d44e3828df9bfa5bb) )
	ROM_LOAD16_BYTE( "l2.0_mortal_kombat_3_u2_ultimate.u2", 0x000000, 0x100000, CRC(3838cfe5) SHA1(e3d2901f3bae1362742fc6ee0aa31c9f63b4dfa3) )
	ROM_LOAD16_BYTE( "l1_mortal_kombat_3_u3_music_spch.u3", 0x200000, 0x100000, CRC(856fe411) SHA1(6165ebecfce7500e948d84492ffa19eed7f47091) )
	ROM_LOAD16_BYTE( "l1_mortal_kombat_3_u4_music_spch.u4", 0x400000, 0x100000, CRC(428a406f) SHA1(e70ec83cd054de0da1e178720ed0035b8887f797) )
	ROM_LOAD16_BYTE( "l1_mortal_kombat_3_u5_music_spch.u5", 0x600000, 0x100000, CRC(3b98a09f) SHA1(edf1d02a56dcf3349e6b4bb4097acfe7592305f4) )

	ROM_REGION16_LE( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "mk321u54_la02.bin",  0x00000, 0x80000, CRC(5465cb7f) SHA1(d6bf59a186747556e1fe581000411175e3967ca6) )
	ROM_LOAD16_BYTE( "mk321u63_la02.bin",  0x00001, 0x80000, CRC(d5a0a160) SHA1(ac3172e07133aa7cd973956810d75c5e12c5a452) )

	ROM_REGION( 0x2000000, "gfxrom", 0 )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u133_game_rom_la01.u133",  0x0000000, 0x100000, CRC(b6542432) SHA1(686761975535028cfc625f6943d4bff8cfb460a7) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u132_game_rom_la01.u132",  0x0000001, 0x100000, CRC(f7a771cd) SHA1(b427dc1d75c824582e1336d54a550663f7d8a724) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u131_game_rom_la01.u131",  0x0000002, 0x100000, CRC(c47ed51b) SHA1(5b10c326cac07b9fcea458b7e995a8f64135fe04) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u130_game_rom_la01.u130",  0x0000003, 0x100000, CRC(5b189c96) SHA1(dc494b23d4376fcddbf12ff5a57cfdc4b9c31b95) )

	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u129_game_rom.u129",  0x0400000, 0x100000, CRC(a8b41803) SHA1(9697e35e8bb51d6d36b1d7ae47377b446e57682f) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u128_game_rom.u128",  0x0400001, 0x100000, CRC(b410d72f) SHA1(ac5c1c6f744186540f4ab100d9bd4ce6007e600b) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u127_game_rom.u127",  0x0400002, 0x100000, CRC(bd985be7) SHA1(f5183abea2e5eb2c2c8cefa72c9ed321679f5128) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u126_game_rom.u126",  0x0400003, 0x100000, CRC(e7c32cf4) SHA1(94ea7b2eed7dae66f5dd676c20d6b360140e3e0e) )

	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u125_game_rom_la01.u125",  0x0800000, 0x100000, CRC(8dfb82bf) SHA1(f58a4030ff1e0aa5e7870f81dbc685ab6bd736fa) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u124_game_rom_la01.u124",  0x0800001, 0x100000, CRC(f41c6031) SHA1(13bdfe5fc2b027c2438a8474a185b5073902308d) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u123_game_rom_la01.u123",  0x0800002, 0x100000, CRC(3cae16e3) SHA1(10469fcad0de444f5249e1575cc68eff257af32f) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u122_game_rom_la01.u122",  0x0800003, 0x100000, CRC(cacb9b48) SHA1(8bc7452978d44a7b36952b4e1017ce0bd7af4186) )

	ROM_LOAD32_BYTE( "mk320210805.u121",  0x0c00000, 0x100000, CRC(5a9a0624) SHA1(7b32a019739d66d7b5a4d5834436d28dbb42dd09) )
	ROM_LOAD32_BYTE( "mk320210805.u120",  0x0c00001, 0x100000, CRC(1821ffe5) SHA1(59e5bad4ad2c6c60e5f2a8ea9dde9cff35da0177) )
	ROM_LOAD32_BYTE( "mk320210805.u119",  0x0c00002, 0x100000, CRC(d88ee038) SHA1(b90ce3eaff6205fff8ee16cb8f531671ce3ab28d) )
	ROM_LOAD32_BYTE( "mk320210805.u118",  0x0c00003, 0x100000, CRC(ec1208bb) SHA1(479d4d6bae7064eb22278cecf34c72d7a9774c1b) )

	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u117_game_rom.u117",  0x1000000, 0x080000, CRC(1ab20377) SHA1(0c0d14464d8b23a60e0693669af2ddb82655eff8) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u116_game_rom.u116",  0x1000001, 0x080000, CRC(ba246ad0) SHA1(ec6bdd4b9cd3007bb66bb8de36d148abb30e7f11) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u115_game_rom.u115",  0x1000002, 0x080000, CRC(3ee8b124) SHA1(1523d51e36d3c336b134a562da36a29ba137c0f6) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u114_game_rom.u114",  0x1000003, 0x080000, CRC(a8d99922) SHA1(04ff8d85448701070672f44dbf5bcfd744f1bc8a) )
ROM_END

 /*************************
 Ultimate Mortal Kombat 3 
****************************/

ROM_START( umk3uk20220119 )
	ROM_REGION16_LE( 0x800000, "dcs", ROMREGION_ERASEFF )
	ROM_LOAD16_BYTE( "l2.0_mortal_kombat_3_u2_ultimate.u2",  0x000000, 0x100000, CRC(3838cfe5) SHA1(e3d2901f3bae1362742fc6ee0aa31c9f63b4dfa3) )
	ROM_LOAD16_BYTE( "l1_mortal_kombat_3_u3_music_spch.u3",  0x200000, 0x100000, CRC(856fe411) SHA1(6165ebecfce7500e948d84492ffa19eed7f47091) )
	ROM_LOAD16_BYTE( "l1_mortal_kombat_3_u4_music_spch.u4",  0x400000, 0x100000, CRC(428a406f) SHA1(e70ec83cd054de0da1e178720ed0035b8887f797) )
	ROM_LOAD16_BYTE( "l1_mortal_kombat_3_u5_music_spch.u5",  0x600000, 0x100000, CRC(3b98a09f) SHA1(edf1d02a56dcf3349e6b4bb4097acfe7592305f4) )

	ROM_REGION16_LE( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "uk20220119.u54", 0x00000, 0x80000, CRC(f8bb9e27) SHA1(950f13b0bc5fe3814da2837152ed7de749be215e) )
	ROM_LOAD16_BYTE( "uk20220119.u63", 0x00001, 0x80000, CRC(20d12777) SHA1(0ac809fa55640e514a5ecea708e7c18fd5665710) )

	ROM_REGION( 0x1009, "serial_security:pic", 0 )
	ROM_LOAD( "463_mk3_ultimate.u64",  0x0000, 0x1009, CRC(4f425218) SHA1(7f26045ed2c9ca94fadcb673ce10f28208aa720e) )

	ROM_REGION( 0x2400000, "gfxrom", 0 )
	ROM_LOAD32_BYTE( "uc20181023.u133",  0x0000000, 0x100000, CRC(62c6f8ab) SHA1(cfe77e21cb25b4513411658051b849e3c0dd728c) )
	ROM_LOAD32_BYTE( "uc20181023.u132",  0x0000001, 0x100000, CRC(87d977dc) SHA1(3bd6ded7c212621c3f45e29fa90a19b1c7abaac6) )
	ROM_LOAD32_BYTE( "uc20181023.u131",  0x0000002, 0x100000, CRC(483cbc7b) SHA1(39d03642ea62f8623b76ecf084a390db7c366dcd) )
	ROM_LOAD32_BYTE( "uc20181023.u130",  0x0000003, 0x100000, CRC(ecf63628) SHA1(3efeda0a59f110e6ab17247b1fed7965291ec885) )

	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u129_game_rom.u129",  0x0400000, 0x100000, CRC(a8b41803) SHA1(9697e35e8bb51d6d36b1d7ae47377b446e57682f) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u128_game_rom.u128",  0x0400001, 0x100000, CRC(b410d72f) SHA1(ac5c1c6f744186540f4ab100d9bd4ce6007e600b) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u127_game_rom.u127",  0x0400002, 0x100000, CRC(bd985be7) SHA1(f5183abea2e5eb2c2c8cefa72c9ed321679f5128) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u126_game_rom.u126",  0x0400003, 0x100000, CRC(e7c32cf4) SHA1(94ea7b2eed7dae66f5dd676c20d6b360140e3e0e) )

	ROM_LOAD32_BYTE( "uc20181023.u125",  0x0800000, 0x100000, CRC(78e8b9e5) SHA1(9a5f87e896c023b70b74a40c4fcb82e46cd8b1cb) )
	ROM_LOAD32_BYTE( "uc20181023.u124",  0x0800001, 0x100000, CRC(1137536c) SHA1(8aee7855a454eeb68e51205ba47e94a0a2915ee3) )
	ROM_LOAD32_BYTE( "uc20181023.u123",  0x0800002, 0x100000, CRC(6a65e954) SHA1(b04e64f361500093450a1a648dad13412282bda1) )
	ROM_LOAD32_BYTE( "uc20181023.u122",  0x0800003, 0x100000, CRC(e6274718) SHA1(66bc57f4e05af9b27caa89fb0a3bd5aef3892117) )

	ROM_LOAD32_BYTE( "uk20220119.u121",  0x0c00000, 0x100000, CRC(2a941ed3) SHA1(c4c9721bcb3e2aab3cc10521736c7602e09b16fe) )
	ROM_LOAD32_BYTE( "uk20220119.u120",  0x0c00001, 0x100000, CRC(57b7a2c1) SHA1(4a62f47586e7c3a41564b6379dd4fb87fadad36c) )
	ROM_LOAD32_BYTE( "uk20220119.u119",  0x0c00002, 0x100000, CRC(e62e43ec) SHA1(2121a8a914b649f36e86f37d018075cde1e4472d) )
	ROM_LOAD32_BYTE( "uk20220119.u118",  0x0c00003, 0x100000, CRC(70ebc1a4) SHA1(566e8944c29e24e69c1d931dc5569db7fda2f2fa) )

	ROM_LOAD32_BYTE( "uk20220119.u117",  0x1000000, 0x100000, CRC(44dd107c) SHA1(84e6cfc973c46437cd9cd86eaaf4f51e35db0ba1) )
	ROM_LOAD32_BYTE( "uk20220119.u116",  0x1000001, 0x100000, CRC(ac2d2070) SHA1(4172d1ebb38727d8b11aab0969efb9fe04227102) )
	ROM_LOAD32_BYTE( "uk20220119.u115",  0x1000002, 0x100000, CRC(2f53a17b) SHA1(850f79516ff9f49276cb2fdd53a8ec310abe8aa7) )
	ROM_LOAD32_BYTE( "uk20220119.u114",  0x1000003, 0x100000, CRC(23f042b2) SHA1(5113faf6893b5e974f6a3136b358c061fd54987f) )

	ROM_LOAD32_BYTE( "uk20220119.u113",  0x1400000, 0x100000, CRC(0ad044f8) SHA1(87bb552d0dae5e092ac6537e217134921ec54e3c) )
	ROM_LOAD32_BYTE( "uk20220119.u112",  0x1400001, 0x100000, CRC(b19b1d16) SHA1(9ef94354cbbd44515be439502d1ac7a62c09400b) )
	ROM_LOAD32_BYTE( "uk20220119.u111",  0x1400002, 0x100000, CRC(bfa93ae2) SHA1(11f4e04961764e193c9f4592462d097953f362d1) )
	ROM_LOAD32_BYTE( "uk20220119.u110",  0x1400003, 0x100000, CRC(5b915289) SHA1(2f7098fe594139afce6c54d2b572be0acbed0ac9) )
ROM_END

ROM_START( umk3tm20210821 )
	ROM_REGION16_LE( 0x800000, "dcs", ROMREGION_ERASEFF )
	ROM_LOAD16_BYTE( "l2.0_mortal_kombat_3_u2_ultimate.u2",  0x000000, 0x100000, CRC(3838cfe5) SHA1(e3d2901f3bae1362742fc6ee0aa31c9f63b4dfa3) )
	ROM_LOAD16_BYTE( "l1_mortal_kombat_3_u3_music_spch.u3",  0x200000, 0x100000, CRC(856fe411) SHA1(6165ebecfce7500e948d84492ffa19eed7f47091) )
	ROM_LOAD16_BYTE( "l1_mortal_kombat_3_u4_music_spch.u4",  0x400000, 0x100000, CRC(428a406f) SHA1(e70ec83cd054de0da1e178720ed0035b8887f797) )
	ROM_LOAD16_BYTE( "l1_mortal_kombat_3_u5_music_spch.u5",  0x600000, 0x100000, CRC(3b98a09f) SHA1(edf1d02a56dcf3349e6b4bb4097acfe7592305f4) )

	ROM_REGION16_LE( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "tm20210821.u54",  0x00000, 0x80000, CRC(bb440df4) SHA1(b4eaaecebbec5ce097dbf945aaf261ad7811a545) )
	ROM_LOAD16_BYTE( "tm20210821.u63",  0x00001, 0x80000, CRC(cad75d26) SHA1(61f326042024d98e8efbac93bbdb17562a07425e) )

	ROM_REGION( 0x1009, "serial_security:pic", 0 )
	ROM_LOAD( "463_mk3_ultimate.u64",  0x0000, 0x1009, CRC(4f425218) SHA1(7f26045ed2c9ca94fadcb673ce10f28208aa720e) )

	ROM_REGION( 0x2400000, "gfxrom", 0 )
	ROM_LOAD32_BYTE( "uc20181023.u133",  0x0000000, 0x100000, CRC(62c6f8ab) SHA1(cfe77e21cb25b4513411658051b849e3c0dd728c) )
	ROM_LOAD32_BYTE( "uc20181023.u132",  0x0000001, 0x100000, CRC(87d977dc) SHA1(3bd6ded7c212621c3f45e29fa90a19b1c7abaac6) )
	ROM_LOAD32_BYTE( "uc20181023.u131",  0x0000002, 0x100000, CRC(483cbc7b) SHA1(39d03642ea62f8623b76ecf084a390db7c366dcd) )
	ROM_LOAD32_BYTE( "uc20181023.u130",  0x0000003, 0x100000, CRC(ecf63628) SHA1(3efeda0a59f110e6ab17247b1fed7965291ec885) )

	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u129_game_rom.u129",  0x0400000, 0x100000, CRC(a8b41803) SHA1(9697e35e8bb51d6d36b1d7ae47377b446e57682f) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u128_game_rom.u128",  0x0400001, 0x100000, CRC(b410d72f) SHA1(ac5c1c6f744186540f4ab100d9bd4ce6007e600b) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u127_game_rom.u127",  0x0400002, 0x100000, CRC(bd985be7) SHA1(f5183abea2e5eb2c2c8cefa72c9ed321679f5128) )
	ROM_LOAD32_BYTE( "l1_mortal_kombat_3_u126_game_rom.u126",  0x0400003, 0x100000, CRC(e7c32cf4) SHA1(94ea7b2eed7dae66f5dd676c20d6b360140e3e0e) )

	ROM_LOAD32_BYTE( "tm20190417.u125",  0x0800000, 0x100000, CRC(352d8d92) SHA1(18781a76a0d558f96e65ab0950cf78a0358d672c) )
	ROM_LOAD32_BYTE( "tm20190417.u124",  0x0800001, 0x100000, CRC(3169adfb) SHA1(4020d432541a0eb098120e0de856da11c6198d60) )
	ROM_LOAD32_BYTE( "tm20190417.u123",  0x0800002, 0x100000, CRC(71e7773e) SHA1(52d1d802e09d365d6c6e6f78a95d4eef32d653ec) )
	ROM_LOAD32_BYTE( "tm20190417.u122",  0x0800003, 0x100000, CRC(629bf47c) SHA1(d0a5e3ec3e4063f1318068f3bf76651738f8e96d) )

	ROM_LOAD32_BYTE( "tm20190417.u121",  0x0c00000, 0x100000, CRC(e70dcbc4) SHA1(072ecfbd0feb3de506159baab8b132814b343566) )
	ROM_LOAD32_BYTE( "tm20190417.u120",  0x0c00001, 0x100000, CRC(46e54f10) SHA1(95437f6a49cdf40fb3212b2ff81a956bc644592a) )
	ROM_LOAD32_BYTE( "tm20190417.u119",  0x0c00002, 0x100000, CRC(3bb9cc20) SHA1(168847bf52b73c1e595c05cc9308a6605b937ea8) )
	ROM_LOAD32_BYTE( "tm20190417.u118",  0x0c00003, 0x100000, CRC(03319743) SHA1(dd085aef96daf250a42fb0d69fe38d431e22fb15) )

	ROM_LOAD32_BYTE( "tm20210821.u117",  0x1000000, 0x100000, CRC(1f173349) SHA1(59dc244a306b30545995872cf21fcf3c4655149f) )
	ROM_LOAD32_BYTE( "tm20210821.u116",  0x1000001, 0x100000, CRC(55ec2afd) SHA1(925f58522ea4747cd2025b0eb92c0c64c3a7cdcc) )
	ROM_LOAD32_BYTE( "tm20210821.u115",  0x1000002, 0x100000, CRC(910ba00c) SHA1(62619f28563a41e74d1e37a1df39037ba709924a) )
	ROM_LOAD32_BYTE( "tm20210821.u114",  0x1000003, 0x100000, CRC(8e3461c1) SHA1(5637320b534ba603b4b44365056ad1adb10e2468) )

	ROM_LOAD32_BYTE( "tm20190417.u113",  0x1400000, 0x100000, CRC(2a3ed57e) SHA1(6ceca87b31448c539acd48921f7b61c13dc9c279) )
	ROM_LOAD32_BYTE( "tm20190417.u112",  0x1400001, 0x100000, CRC(a1470fe9) SHA1(8c109723416513d220031a600ba8191d6532dd93) )
	ROM_LOAD32_BYTE( "tm20190417.u111",  0x1400002, 0x100000, CRC(7c7fd457) SHA1(9acb7a668f1ee9e6b56cc2812e51a3cc277c46ce) )
	ROM_LOAD32_BYTE( "tm20190417.u110",  0x1400003, 0x100000, CRC(271e2922) SHA1(9ce72cb7ee1095481f359b7dd85c0dc65f9ec79d) )
ROM_END

 /*****************
 WWF: Wrestlemania
*********************/

ROM_START( wwfmaniala01 )
	ROM_REGION16_LE( 0x800000, "dcs", ROMREGION_ERASEFF )
	ROM_LOAD16_BYTE( "wwf_music-spch_l1.u2", 0x000000, 0x100000, CRC(a9acb250) SHA1(c1a7773ffdb86dc2c1c90c220482ed6330fcbb55) ) /* These 4 are labeled as L1 */
	ROM_LOAD16_BYTE( "wwf_music-spch_l1.u3", 0x200000, 0x100000, CRC(9442b6c9) SHA1(1f887c05ab9ca99078be584d7e9e6c59c8ec1818) )
	ROM_LOAD16_BYTE( "wwf_music-spch_l1.u4", 0x400000, 0x100000, CRC(cee78fac) SHA1(c37d3b4aef47dc80d864497b3013f03220d45482) )
	ROM_LOAD16_BYTE( "wwf_music-spch_l1.u5", 0x600000, 0x100000, CRC(5b31fd40) SHA1(35dcf19b223029e17616357d29dd04bbfeb83491) )

	ROM_REGION16_LE( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "wwf_game_rom_l1_la01.30.u54", 0x00000, 0x80000, CRC(ffd1abc6) SHA1(c95dc542d461a6a5175c8cd5de950d0530244a4d) ) /* Labeled as L1.30 */
	ROM_LOAD16_BYTE( "wwf_game_rom_l1_la01.30.u63", 0x00001, 0x80000, CRC(41260903) SHA1(7f5195d719333972289a4c94c0f837af9cfdb325) ) /* Labeled as L1.30 */

	ROM_REGION( 0x2000000, "gfxrom", 0 )
	ROM_LOAD32_BYTE( "wwf_image_rom_l1.u133", 0x0000000, 0x100000, CRC(5e1b1e3d) SHA1(55f54e4b0dc775058699b1c0abdd7241ffca0e76) ) /* All graphics roms labeled as L1 */
	ROM_LOAD32_BYTE( "wwf_image_rom_l1.u132", 0x0000001, 0x100000, CRC(5943b3b2) SHA1(8ba0b20e7993769736c961d0fda97b2850d1446b) )
	ROM_LOAD32_BYTE( "wwf_image_rom_l1.u131", 0x0000002, 0x100000, CRC(0815db22) SHA1(ebd6a8c4f0e8d979af7f173b3f139d91e4857f6b) )
	ROM_LOAD32_BYTE( "wwf_image_rom_l1.u130", 0x0000003, 0x100000, CRC(9ee9a145) SHA1(caeb8506e1414e8c58e3031d4a2e0619ef3922b7) )

	ROM_LOAD32_BYTE( "wwf_image_rom_l1.u129", 0x0400000, 0x100000, CRC(c644c2f4) SHA1(9094452eb37ec92932109ab2b209e12074111dd7) )
	ROM_LOAD32_BYTE( "wwf_image_rom_l1.u128", 0x0400001, 0x100000, CRC(fcda4e9a) SHA1(a05a12f606632034eae662cccfee5aaaffe0348b) )
	ROM_LOAD32_BYTE( "wwf_image_rom_l1.u127", 0x0400002, 0x100000, CRC(45be7428) SHA1(a5d3e37c64cac03139028fe998494b76e6b6a7ae) )
	ROM_LOAD32_BYTE( "wwf_image_rom_l1.u126", 0x0400003, 0x100000, CRC(eaa276a8) SHA1(d0c2f4d4409830355c6e112e3eafb4d3a1b8c22e) )

	ROM_LOAD32_BYTE( "wwf_image_rom_l1.u125", 0x0800000, 0x100000, CRC(a19ebeed) SHA1(cf51bca29fd39c6189c2b431eb718a6341781d1f) )
	ROM_LOAD32_BYTE( "wwf_image_rom_l1.u124", 0x0800001, 0x100000, CRC(dc7d3dbb) SHA1(8982d9a1babce57ae7465bce3f4863dd336c20ac) )
	ROM_LOAD32_BYTE( "wwf_image_rom_l1.u123", 0x0800002, 0x100000, CRC(e0ade56f) SHA1(a15c672a45f39c0232d678e71380d4f58c4659ae) )
	ROM_LOAD32_BYTE( "wwf_image_rom_l1.u122", 0x0800003, 0x100000, CRC(2800c78d) SHA1(8012785f1c1eaf8d533a98e0a521a5d31efc7a42) )

	ROM_LOAD32_BYTE( "wwf_image_rom_l1.u121", 0x0c00000, 0x100000, CRC(a28ffcba) SHA1(f66be0793b12a7f04e32d3db8311d1f33b0c3fbe) )
	ROM_LOAD32_BYTE( "wwf_image_rom_l1.u120", 0x0c00001, 0x100000, CRC(3a05d371) SHA1(4ed73e1c06ea7bd33e6c72a6a752960ba55d1975) )
	ROM_LOAD32_BYTE( "wwf_image_rom_l1.u119", 0x0c00002, 0x100000, CRC(97ffa659) SHA1(986f8ec57085b808d33c85ed55b35a5e1cadf3b6) )
	ROM_LOAD32_BYTE( "wwf_image_rom_l1.u118", 0x0c00003, 0x100000, CRC(46668e97) SHA1(282ca2e561f7553717d60b5a745f8e3fc1bda610) )
ROM_END

/*    YEAR  NAME            PARENT    MACHINE        INPUT       INIT             MONITOR COMPANY                 FULLNAME FLAGS */
// Mortal Kombat 3
GAME( 2020, mk3la01,        mk3,        wunit_picsim, mk3,      midwunit_state, init_mk3,      ROT0, "hack",          "Mortal Kombat 3 (Revision 2.1 Kaillera Friendly 2020-12-03)", MACHINE_SUPPORTS_SAVE )
GAME( 2021, mk3la02,        mk3,        wunit_picsim, mk3,      midwunit_state, init_mk3,      ROT0, "hack",          "Mortal Kombat 3 (Revision 2.1 Kaillera Friendly 2021-08-05)", MACHINE_SUPPORTS_SAVE )
// Ultimate Mortal Kombat 3 
GAME( 2022, umk3uk20220119, umk3,       wunit_picemu, mk3,      midwunit_state, init_umk3,     ROT0, "TEAM UMK 3",    "Ultimate Mortal Kombat 3 (UK Edition 2021-07-27)", MACHINE_SUPPORTS_SAVE )
GAME( 2021, umk3tm20210821, umk3,       wunit_picemu, mk3,      midwunit_state, init_umk3,     ROT0, "TEAM UMK 3",    "Ultimate Mortal Kombat 3 (Team Edition 2 2021-08-21)", MACHINE_NOT_WORKING | MACHINE_SUPPORTS_SAVE )
// WWF: Wrestlemania
GAME( 2020, wwfmaniala01,   wwfmania,   wunit_picsim, wwfmania, midwunit_state, init_wwfmania, ROT0, "hack",          "WWF: Wrestlemania (Acid Clown Edition SP2 2020-12-03)", MACHINE_SUPPORTS_SAVE )
