
/* AUTOGENERATED BY ./mkprototab.pl, DO NOT EDIT */

typedef struct hs_prototab_ent {
    enum hs_op_kind     kind;
    int                 immediate;
    size_t              len_1, len_2;
} hs_prototab_ent_t;

extern const hs_prototab_ent_t hs_prototab[];

enum {
              HS_OP_END =    0,
        HS_OP_LITERAL_1 =  0x1,
        HS_OP_LITERAL_2 =  0x2,
        HS_OP_LITERAL_3 =  0x3,
        HS_OP_LITERAL_4 =  0x4,
        HS_OP_LITERAL_5 =  0x5,
        HS_OP_LITERAL_6 =  0x6,
        HS_OP_LITERAL_7 =  0x7,
        HS_OP_LITERAL_8 =  0x8,
        HS_OP_LITERAL_9 =  0x9,
       HS_OP_LITERAL_10 =  0xa,
       HS_OP_LITERAL_11 =  0xb,
       HS_OP_LITERAL_12 =  0xc,
       HS_OP_LITERAL_13 =  0xd,
       HS_OP_LITERAL_14 =  0xe,
       HS_OP_LITERAL_15 =  0xf,
       HS_OP_LITERAL_16 = 0x10,
       HS_OP_LITERAL_17 = 0x11,
       HS_OP_LITERAL_18 = 0x12,
       HS_OP_LITERAL_19 = 0x13,
       HS_OP_LITERAL_20 = 0x14,
       HS_OP_LITERAL_21 = 0x15,
       HS_OP_LITERAL_22 = 0x16,
       HS_OP_LITERAL_23 = 0x17,
       HS_OP_LITERAL_24 = 0x18,
       HS_OP_LITERAL_25 = 0x19,
       HS_OP_LITERAL_26 = 0x1a,
       HS_OP_LITERAL_27 = 0x1b,
       HS_OP_LITERAL_28 = 0x1c,
       HS_OP_LITERAL_29 = 0x1d,
       HS_OP_LITERAL_30 = 0x1e,
       HS_OP_LITERAL_31 = 0x1f,
       HS_OP_LITERAL_32 = 0x20,
       HS_OP_LITERAL_33 = 0x21,
       HS_OP_LITERAL_34 = 0x22,
       HS_OP_LITERAL_35 = 0x23,
       HS_OP_LITERAL_36 = 0x24,
       HS_OP_LITERAL_37 = 0x25,
       HS_OP_LITERAL_38 = 0x26,
       HS_OP_LITERAL_39 = 0x27,
       HS_OP_LITERAL_40 = 0x28,
       HS_OP_LITERAL_41 = 0x29,
       HS_OP_LITERAL_42 = 0x2a,
       HS_OP_LITERAL_43 = 0x2b,
       HS_OP_LITERAL_44 = 0x2c,
       HS_OP_LITERAL_45 = 0x2d,
       HS_OP_LITERAL_46 = 0x2e,
       HS_OP_LITERAL_47 = 0x2f,
       HS_OP_LITERAL_48 = 0x30,
       HS_OP_LITERAL_49 = 0x31,
       HS_OP_LITERAL_50 = 0x32,
       HS_OP_LITERAL_51 = 0x33,
       HS_OP_LITERAL_52 = 0x34,
       HS_OP_LITERAL_53 = 0x35,
       HS_OP_LITERAL_54 = 0x36,
       HS_OP_LITERAL_55 = 0x37,
       HS_OP_LITERAL_56 = 0x38,
       HS_OP_LITERAL_57 = 0x39,
       HS_OP_LITERAL_58 = 0x3a,
       HS_OP_LITERAL_59 = 0x3b,
       HS_OP_LITERAL_60 = 0x3c,
       HS_OP_LITERAL_61 = 0x3d,
       HS_OP_LITERAL_62 = 0x3e,
       HS_OP_LITERAL_63 = 0x3f,
       HS_OP_LITERAL_64 = 0x40,
       HS_OP_LITERAL_N1 = 0x41,
       HS_OP_LITERAL_N2 = 0x42,
       HS_OP_LITERAL_N4 = 0x43,
       HS_OP_LITERAL_N8 = 0x44,
       HS_OP_COPY_N1_N1 = 0x45,
       HS_OP_COPY_N1_N2 = 0x46,
       HS_OP_COPY_N1_N4 = 0x47,
       HS_OP_COPY_N1_N8 = 0x48,
       HS_OP_COPY_N2_N1 = 0x49,
       HS_OP_COPY_N2_N2 = 0x4a,
       HS_OP_COPY_N2_N4 = 0x4b,
       HS_OP_COPY_N2_N8 = 0x4c,
       HS_OP_COPY_N4_N1 = 0x4d,
       HS_OP_COPY_N4_N2 = 0x4e,
       HS_OP_COPY_N4_N4 = 0x4f,
       HS_OP_COPY_N4_N8 = 0x50,
       HS_OP_COPY_N8_N1 = 0x51,
       HS_OP_COPY_N8_N2 = 0x52,
       HS_OP_COPY_N8_N4 = 0x53,
       HS_OP_COPY_N8_N8 = 0x54,
      HS_OP_RESERVED_85 = 0x55,
      HS_OP_RESERVED_86 = 0x56,
      HS_OP_RESERVED_87 = 0x57,
      HS_OP_RESERVED_88 = 0x58,
      HS_OP_RESERVED_89 = 0x59,
      HS_OP_RESERVED_90 = 0x5a,
      HS_OP_RESERVED_91 = 0x5b,
      HS_OP_RESERVED_92 = 0x5c,
      HS_OP_RESERVED_93 = 0x5d,
      HS_OP_RESERVED_94 = 0x5e,
      HS_OP_RESERVED_95 = 0x5f,
      HS_OP_RESERVED_96 = 0x60,
      HS_OP_RESERVED_97 = 0x61,
      HS_OP_RESERVED_98 = 0x62,
      HS_OP_RESERVED_99 = 0x63,
     HS_OP_RESERVED_100 = 0x64,
     HS_OP_RESERVED_101 = 0x65,
     HS_OP_RESERVED_102 = 0x66,
     HS_OP_RESERVED_103 = 0x67,
     HS_OP_RESERVED_104 = 0x68,
     HS_OP_RESERVED_105 = 0x69,
     HS_OP_RESERVED_106 = 0x6a,
     HS_OP_RESERVED_107 = 0x6b,
     HS_OP_RESERVED_108 = 0x6c,
     HS_OP_RESERVED_109 = 0x6d,
     HS_OP_RESERVED_110 = 0x6e,
     HS_OP_RESERVED_111 = 0x6f,
     HS_OP_RESERVED_112 = 0x70,
     HS_OP_RESERVED_113 = 0x71,
     HS_OP_RESERVED_114 = 0x72,
     HS_OP_RESERVED_115 = 0x73,
     HS_OP_RESERVED_116 = 0x74,
     HS_OP_RESERVED_117 = 0x75,
     HS_OP_RESERVED_118 = 0x76,
     HS_OP_RESERVED_119 = 0x77,
     HS_OP_RESERVED_120 = 0x78,
     HS_OP_RESERVED_121 = 0x79,
     HS_OP_RESERVED_122 = 0x7a,
     HS_OP_RESERVED_123 = 0x7b,
     HS_OP_RESERVED_124 = 0x7c,
     HS_OP_RESERVED_125 = 0x7d,
     HS_OP_RESERVED_126 = 0x7e,
     HS_OP_RESERVED_127 = 0x7f,
     HS_OP_RESERVED_128 = 0x80,
     HS_OP_RESERVED_129 = 0x81,
     HS_OP_RESERVED_130 = 0x82,
     HS_OP_RESERVED_131 = 0x83,
     HS_OP_RESERVED_132 = 0x84,
     HS_OP_RESERVED_133 = 0x85,
     HS_OP_RESERVED_134 = 0x86,
     HS_OP_RESERVED_135 = 0x87,
     HS_OP_RESERVED_136 = 0x88,
     HS_OP_RESERVED_137 = 0x89,
     HS_OP_RESERVED_138 = 0x8a,
     HS_OP_RESERVED_139 = 0x8b,
     HS_OP_RESERVED_140 = 0x8c,
     HS_OP_RESERVED_141 = 0x8d,
     HS_OP_RESERVED_142 = 0x8e,
     HS_OP_RESERVED_143 = 0x8f,
     HS_OP_RESERVED_144 = 0x90,
     HS_OP_RESERVED_145 = 0x91,
     HS_OP_RESERVED_146 = 0x92,
     HS_OP_RESERVED_147 = 0x93,
     HS_OP_RESERVED_148 = 0x94,
     HS_OP_RESERVED_149 = 0x95,
     HS_OP_RESERVED_150 = 0x96,
     HS_OP_RESERVED_151 = 0x97,
     HS_OP_RESERVED_152 = 0x98,
     HS_OP_RESERVED_153 = 0x99,
     HS_OP_RESERVED_154 = 0x9a,
     HS_OP_RESERVED_155 = 0x9b,
     HS_OP_RESERVED_156 = 0x9c,
     HS_OP_RESERVED_157 = 0x9d,
     HS_OP_RESERVED_158 = 0x9e,
     HS_OP_RESERVED_159 = 0x9f,
     HS_OP_RESERVED_160 = 0xa0,
     HS_OP_RESERVED_161 = 0xa1,
     HS_OP_RESERVED_162 = 0xa2,
     HS_OP_RESERVED_163 = 0xa3,
     HS_OP_RESERVED_164 = 0xa4,
     HS_OP_RESERVED_165 = 0xa5,
     HS_OP_RESERVED_166 = 0xa6,
     HS_OP_RESERVED_167 = 0xa7,
     HS_OP_RESERVED_168 = 0xa8,
     HS_OP_RESERVED_169 = 0xa9,
     HS_OP_RESERVED_170 = 0xaa,
     HS_OP_RESERVED_171 = 0xab,
     HS_OP_RESERVED_172 = 0xac,
     HS_OP_RESERVED_173 = 0xad,
     HS_OP_RESERVED_174 = 0xae,
     HS_OP_RESERVED_175 = 0xaf,
     HS_OP_RESERVED_176 = 0xb0,
     HS_OP_RESERVED_177 = 0xb1,
     HS_OP_RESERVED_178 = 0xb2,
     HS_OP_RESERVED_179 = 0xb3,
     HS_OP_RESERVED_180 = 0xb4,
     HS_OP_RESERVED_181 = 0xb5,
     HS_OP_RESERVED_182 = 0xb6,
     HS_OP_RESERVED_183 = 0xb7,
     HS_OP_RESERVED_184 = 0xb8,
     HS_OP_RESERVED_185 = 0xb9,
     HS_OP_RESERVED_186 = 0xba,
     HS_OP_RESERVED_187 = 0xbb,
     HS_OP_RESERVED_188 = 0xbc,
     HS_OP_RESERVED_189 = 0xbd,
     HS_OP_RESERVED_190 = 0xbe,
     HS_OP_RESERVED_191 = 0xbf,
     HS_OP_RESERVED_192 = 0xc0,
     HS_OP_RESERVED_193 = 0xc1,
     HS_OP_RESERVED_194 = 0xc2,
     HS_OP_RESERVED_195 = 0xc3,
     HS_OP_RESERVED_196 = 0xc4,
     HS_OP_RESERVED_197 = 0xc5,
     HS_OP_RESERVED_198 = 0xc6,
     HS_OP_RESERVED_199 = 0xc7,
     HS_OP_RESERVED_200 = 0xc8,
     HS_OP_RESERVED_201 = 0xc9,
     HS_OP_RESERVED_202 = 0xca,
     HS_OP_RESERVED_203 = 0xcb,
     HS_OP_RESERVED_204 = 0xcc,
     HS_OP_RESERVED_205 = 0xcd,
     HS_OP_RESERVED_206 = 0xce,
     HS_OP_RESERVED_207 = 0xcf,
     HS_OP_RESERVED_208 = 0xd0,
     HS_OP_RESERVED_209 = 0xd1,
     HS_OP_RESERVED_210 = 0xd2,
     HS_OP_RESERVED_211 = 0xd3,
     HS_OP_RESERVED_212 = 0xd4,
     HS_OP_RESERVED_213 = 0xd5,
     HS_OP_RESERVED_214 = 0xd6,
     HS_OP_RESERVED_215 = 0xd7,
     HS_OP_RESERVED_216 = 0xd8,
     HS_OP_RESERVED_217 = 0xd9,
     HS_OP_RESERVED_218 = 0xda,
     HS_OP_RESERVED_219 = 0xdb,
     HS_OP_RESERVED_220 = 0xdc,
     HS_OP_RESERVED_221 = 0xdd,
     HS_OP_RESERVED_222 = 0xde,
     HS_OP_RESERVED_223 = 0xdf,
     HS_OP_RESERVED_224 = 0xe0,
     HS_OP_RESERVED_225 = 0xe1,
     HS_OP_RESERVED_226 = 0xe2,
     HS_OP_RESERVED_227 = 0xe3,
     HS_OP_RESERVED_228 = 0xe4,
     HS_OP_RESERVED_229 = 0xe5,
     HS_OP_RESERVED_230 = 0xe6,
     HS_OP_RESERVED_231 = 0xe7,
     HS_OP_RESERVED_232 = 0xe8,
     HS_OP_RESERVED_233 = 0xe9,
     HS_OP_RESERVED_234 = 0xea,
     HS_OP_RESERVED_235 = 0xeb,
     HS_OP_RESERVED_236 = 0xec,
     HS_OP_RESERVED_237 = 0xed,
     HS_OP_RESERVED_238 = 0xee,
     HS_OP_RESERVED_239 = 0xef,
     HS_OP_RESERVED_240 = 0xf0,
     HS_OP_RESERVED_241 = 0xf1,
     HS_OP_RESERVED_242 = 0xf2,
     HS_OP_RESERVED_243 = 0xf3,
     HS_OP_RESERVED_244 = 0xf4,
     HS_OP_RESERVED_245 = 0xf5,
     HS_OP_RESERVED_246 = 0xf6,
     HS_OP_RESERVED_247 = 0xf7,
     HS_OP_RESERVED_248 = 0xf8,
     HS_OP_RESERVED_249 = 0xf9,
     HS_OP_RESERVED_250 = 0xfa,
     HS_OP_RESERVED_251 = 0xfb,
     HS_OP_RESERVED_252 = 0xfc,
     HS_OP_RESERVED_253 = 0xfd,
     HS_OP_RESERVED_254 = 0xfe,
     HS_OP_RESERVED_255 = 0xff
};
/* END OF AUTOGENERATED CODE */
