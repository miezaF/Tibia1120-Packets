// pacotes e suas funções
switch ( (unsigned int)v1 )
{
case 0xAu:
    if ( v2 == 8 )
    {
    sub_42CDC0();
    }
    else
    {
    sub_5EC4E0((void *)7);
    sub_42CDC0();
    sub_4A7EF0();
    if ( !byte_B1647A )
    {
        sub_5CB0D0();
        byte_B1647A = 1;
    }
    if ( !byte_B15D33 )
    {
        sub_551220();
        byte_B15D33 = 1;
    }
    sub_41EC20();
    for ( i = 0; ; ++i )
    {
        v18 = i;
        if ( i >= (dword_B0C280 - (signed int)dword_B0C27C) >> 2 )
        break;
        sub_423AB0(*((void **)dword_B0C27C + i));
    }
    }
    break;
case 0xFu:
    if ( !*(_BYTE *)(*(_DWORD *)dword_972784 + 44) )
    {
    v5 = dword_B10050;
    sub_4A8100();
    dword_B10050 = v5;
    *(_BYTE *)(*(_DWORD *)dword_972784 + 44) = 1;
    }
    sub_5EC4E0((void *)0xB);
    sub_42CF80();
    sub_424540();
    break;
case 0x14u:
    sub_42D140();
    break;
case 0x15u:
    sub_42D310();
    break;
case 0x16u:
    sub_42D4C0();
    break;
case 0x17u:
    sub_42D6E0();
    break;
case 0x19u:
    sub_440240();
    break;
case 0x1Du:
    sub_42D9B0();
    break;
case 0x1Eu:
    continue;
case 0x1Fu:
    sub_42DB50(&v17, &v16);
    v6 = sub_409490();
    v7 = sub_40A0A0(v6, &v27);
    LOBYTE(v35) = 6;
    v8 = sub_409490();
    v9 = sub_40A980(v8, (int *)&v15);
    v10 = sub_4093B0((void *)*v9, &v26);
    LOBYTE(v35) = 7;
    sub_41E4F0(v10, v7, v11, v17, v16);
    LOBYTE(v35) = 6;
    sub_40AA70(&v26);
    LOBYTE(v35) = 0;
    sub_40AA70(&v27);
    break;
case 0x28u:
    sub_42DD00();
    break;
case 0x63u:
    sub_42DF80();
    break;
case 0x64u:
    sub_42EED0();
    break;
case 0x65u:
    sub_42F110();
    break;
case 0x66u:
    sub_42F2D0();
    break;
case 0x67u:
    sub_42F490();
    break;
case 0x68u:
    sub_42F650();
    break;
case 0x69u:
    sub_42F810();
    break;
case 0x6Au:
    sub_42FA50();
    break;
case 0x6Bu:
    sub_42FDD0();
    break;
case 0x6Cu:
    sub_4304D0();
    break;
case 0x6Du:
    sub_431B50();
    break;
case 0x6Eu:
    v12 = (void *)sub_4321B0();
    sub_584DB0(v12);
    break;
case 0x6Fu:
    v13 = sub_4326D0();
    sub_585390(v13);
    break;
case 0x70u:
case 0x71u:
case 0x72u:
    sub_4328B0(v1);
    break;
case 0x76u:
    sub_432BD0();
    return result;
case 0x77u:
    sub_432E30();
    break;
case 0x78u:
    sub_432FD0();
    break;
case 0x79u:
    sub_433200();
    break;
case 0x7Au:
    sub_4333C0();
    break;
case 0x7Bu:
    sub_433690();
    break;
case 0x7Cu:
    sub_433940();
    break;
case 0x7Du:
    sub_433AE0();
    sub_585560();
    break;
case 0x7Eu:
    sub_433D00();
    sub_585980();
    break;
case 0x7Fu:
    sub_433F20();
    sub_585BE0();
    break;
case 0x82u:
    sub_4340D0();
    break;
case 0x83u:
    sub_434280();
    break;
case 0x85u:
    sub_4344A0();
    break;
case 0x8Cu:
    sub_434710();
    break;
case 0x8Du:
    sub_4348F0();
    break;
case 0x8Eu:
    sub_434AE0();
    break;
case 0x8Fu:
    sub_434D30();
    break;
case 0x90u:
    sub_434F20();
    break;
case 0x91u:
    sub_435310();
    break;
case 0x92u:
    sub_435C20();
    break;
case 0x93u:
    sub_435100();
    break;
case 0x94u:
    sub_435880();
    break;
case 0x95u:
    sub_435A50();
    break;
case 0x96u:
    sub_435E00();
    break;
case 0x97u:
    sub_436040();
    break;
case 0x9Cu:
    sub_436230();
    break;
case 0x9Du:
    sub_436480();
    break;
case 0x9Eu:
    sub_4367A0();
    break;
case 0x9Fu:
    sub_436990();
    break;
case 0xA0u:
    sub_436B80();
    break;
case 0xA1u:
    sub_436FE0();
    break;
case 0xA2u:
    sub_437270();
    break;
case 0xA3u:
    sub_437410();
    break;
case 0xA4u:
    sub_4375D0();
    break;
case 0xA5u:
    sub_437780();
    break;
case 0xA6u:
    sub_437930();
    break;
case 0xA7u:
    sub_4354F0();
    break;
case 0xA8u:
    sub_4356D0();
    break;
case 0xAAu:
    sub_437AE0();
    break;
case 0xABu:
    sub_438200();
    break;
case 0xACu:
    sub_438440();
    break;
case 0xADu:
    sub_438760();
    break;
case 0xAEu:
    sub_438910();
    break;
case 0xB2u:
    sub_438AC0();
    break;
case 0xB3u:
    sub_438DE0();
    break;
case 0xB4u:
    sub_439170();
    break;
case 0xB5u:
    sub_439BC0();
    break;
case 0xB6u:
    sub_439DF0();
    break;
case 0xB7u:
    sub_439FA0();
    break;
case 0xB8u:
    sub_43A3C0();
    break;
case 0xBEu:
    sub_43A740();
    break;
case 0xBFu:
    sub_43A980();
    break;
case 0xC8u:
    sub_43ABD0();
    break;
case 0xD2u:
    sub_43AF00();
    break;
case 0xD3u:
    sub_43B3E0();
    break;
case 0xD4u:
    sub_43B1E0();
    break;
case 0xDCu:
    sub_43B5B0();
    break;
case 0xDDu:
    sub_43B770();
    break;
case 0xDFu:
    sub_43F9A0();
    break;
case 0xE0u:
    sub_43FFA0();
    break;
case 0xE1u:
    sub_43FD30();
    break;
case 0xE6u:
    sub_4403E0();
    break;
case 0xE7u:
    sub_4405A0();
    break;
case 0xE8u:
    sub_440760();
    break;
case 0xE9u:
    sub_440D20();
    break;
case 0xEBu:
    sub_440ED0();
    break;
case 0xECu:
    sub_441B50();
    break;
case 0xEDu:
    sub_441D00();
    break;
case 0xEEu:
    sub_441F60();
    break;
case 0xF0u:
    sub_43B9E0();
    break;
case 0xF1u:
    sub_43BBE0();
    break;
case 0xF2u:
    sub_43FB70();
    break;
case 0xF3u:
    sub_43BE00();
    break;
case 0xF4u:
    sub_43C100();
    break;
case 0xF5u:
    sub_43C2D0();
    break;
case 0xF6u:
    sub_43C4F0();
    break;
case 0xF7u:
    sub_43C6F0();
    break;
case 0xF8u:
    sub_43C8A0();
    break;
case 0xF9u:
    sub_43CDE0();
    break;
case 0xFAu:
    sub_43D110();
    break;
case 0xFBu:
    sub_43D5E0();
    break;
case 0xFCu:
    sub_43E590();
    break;
case 0xFDu:
    sub_43F340();
    break;
case 0xFEu:
    sub_43F740();
    break;
default:
    sub_40A9E0((int)&v29, &unk_B1611F);
    LOBYTE(v35) = 8;
    sub_40A9E0((int)&v33, &unk_B16135);
    LOBYTE(v35) = 9;
    sub_40A9E0((int)&v31, aType_1);
    LOBYTE(v35) = 10;
    sub_40A9E0((int)&v30, aUnknownPacketT_1);
    LOBYTE(v35) = 11;
    sub_40A9E0((int)&v32, aControlCpp_7);
    LOBYTE(v35) = 12;
    sub_413060(&v21, (int)&v32, 1554, &v30, (int)&v31, (int)v1, (int)&v33, 0, (void ***)&v29);
    _CxxThrowException(&v21, &_TI1_AVTMyException__);
    return result;
}