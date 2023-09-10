#pragma once

typedef struct {
    int ad_i;

} vdpsms_input_t;

typedef struct {
    vdpsms_input_t input;

    int o_ad;
    int o_ad_z;
    int o_oe;
    int o_we0;
    int o_we1;
    int o_ce;

    int w1;
    int w2_h;
    int w2_l;
    int w3;
    int w4;
    int w5;
    int w6;
    int w7;
    int w8;
    int w9;
    int w10;
    int w11;
    int w12;
    int w13;
    int w14;
    int w15;
    int w16;
    int w17;
    int w18;
    int w19;
    int w20;
    int w21;
    int w22[2];
    int w23;
    int w24;
    int w25;
    int w26[2];
    int w27[2];
    int w28;
    int w29[2];
    int w30;
    int w31;
    int w32;
    int w33;
    int w34;
    int w35[3];
    int w36;
    int w37;
    int w38[2];
    int w39;
    int w40;
    int w41;
    int w42;
    int w43[2];
    int w44[2];
    int w45;
    int w46;
    int w47;
    int w48;
    int reg_hit;
    int w49;
    int w50;
    int w51;
    int w52;
    int w53;
    int w54;
    int w55[2];
    int w56;
    int w57;
    int w58;
    int w59;
    int w60;
    int w61;
    int w62;
    int w63;
    int w64;
    int w65;
    int w66;
    int w67;
    int w68;
    int w69;
    int w70;
    int w71;
    int w72;
    int w73;
    int w74;
    int w75;
    int w76;
    int w77;
    int w78;
    int w79;
    int w80;
    int w81;
    int w82;
    int w83;
    int w84;
    int w85[2];
    int w86;
    int w87[2];
    int w88;
    int w89[2];
    int w90[2];
    int w91;
    int w92;
    int w93;
    int w94;
    int w95;
    int w96[2];
    int w97;
    int w98;
    int w99;
    int w100;
    int w101;
    int w102[2];
    int w103;
    int w104[2];
    int w105;
    int w106;
    int w107;
    int w108;
    int w109;
    int w110[2];
    int w111[2];
    int w112[2];
    int w113[2];
    int w114[2];
    int w115[2];
    int w116[2];
    int w117[2];
    int w118;
    int w119[2];
    int w120;
    int w121;
    int w122;
    int w123;
    int w124;
    int w125;
    int w126[2];
    int w127;
    int w128[2];
    int w129[2];
    int w130[2];
    int w131[2];
    int w132[2];
    int w133[2];
    int w134[2];
    int w135[2];
    int w136;
    int w137;
    int w138;
    int w139;
    int w140;
    int w141;
    int w142;
    int w143;
    int w144;
    int w145; // v counter
    int v_pla[14];
    int w146;
    int w147;
    int w148;
    int w149;
    int w150;
    int w151;
    int w152;
    int w153;
    int w154;
    int w155;
    int w156;
    int w157;
    int w158;
    int w159;
    int w160;
    int w161;
    int w162;
    int w163;
    int w164;
    int w165;
    int w166;
    int w167;
    int w168;
    int w169;
    int w170;
    int w171;
    int w172;
    int w173;
    int w174;
    int w175;
    int w176;
    int w177;
    int w178;
    int w179;
    int w180;
    int w181;
    int w182;
    int w183;
    int w184;
    int w185;
    int w185n;
    int w186;
    int w186n;
    int w187;
    int w188; // sync trigger
    int w189; // sync trigger
    int w190;
    int w191;
    int w192;
    int w193[2];
    int w194[2];
    int w195;
    int w196;
    int w197;
    int w198;
    int w199;
    int w200;
    int w201[2];
    int w202[2];
    int w203;
    int w204[2];
    int w205[2];
    int w206;
    int w206n;
    int w207;
    int w208;
    int w209;
    int w210;
    int w211;

    int cpu_pal;
    int cpu_rd;
    int cpu_wr;
    int cpu_iorq;
    int cpu_a0;
    int cpu_a6;
    int cpu_a7;

    int reg_addr;

    int vram_data;
    int vram_address;

    int cpu_data;

    int clk1;
    int clk2;

    int hclk1;
    int hclk2;

    int tm_w1;
    int tm_w2;
    int tm_w3;
    int tm_w4;
    int tm_w5;
    int tm_w6;
    int tm_w7;
    int tm_w8;
    int tm_w9;
} vdpsms_t;
