/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1082_000F_0012_A3C7()
 *
 * @name f__1082_000F_0012_A3C7
 * @implements 1082:000F:0012:A3C7 ()
 *
 * Called From: B4C4:04D1:0005:7CF0
 * Called From: B4F2:033B:0005:7CF0
 * Called From: B511:00A9:001D:9C25
 */
void f__1082_000F_0012_A3C7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0021); emu_cs = 0x10BE; f__10BE_01E2_0027_6596();
	f__1082_0021_0002_CA3A();
}

/**
 * Decompiled function f__1082_0021_0002_CA3A()
 *
 * @name f__1082_0021_0002_CA3A
 * @implements 1082:0021:0002:CA3A ()
 *
 * Called From: 1082:0021:0012:A3C7
 */
void f__1082_0021_0002_CA3A()
{
	f__1082_0037_001A_16D1(); return;
}

/**
 * Decompiled function f__1082_0023_0014_E02C()
 *
 * @name f__1082_0023_0014_E02C
 * @implements 1082:0023:0014:E02C ()
 *
 * Called From: 1082:0045:001A:16D1
 */
void f__1082_0023_0014_E02C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0037); emu_cs = 0x10BE; f__10BE_020F_004E_633B();
	f__1082_0037_001A_16D1();
}

/**
 * Decompiled function f__1082_0037_001A_16D1()
 *
 * @name f__1082_0037_001A_16D1
 * @implements 1082:0037:001A:16D1 ()
 *
 * Called From: 1082:0021:0002:CA3A
 * Called From: 1082:0037:0014:E02C
 */
void f__1082_0037_001A_16D1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1082_0023_0014_E02C(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F8), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__1082_008E_000A_018A(); return;
}

/**
 * Decompiled function f__1082_0051_0047_3D25()
 *
 * @name f__1082_0051_0047_3D25
 * @implements 1082:0051:0047:3D25 ()
 *
 * Called From: 1082:0091:000A:018A
 * Called From: 1082:0091:0047:3D25
 * Called From: 1082:0091:000B:C182
 */
void f__1082_0051_0047_3D25()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x58);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35F6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (emu_flags.zf) { f__1082_008D_000B_C182(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35F8));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8624), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8622), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x35F8));
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x52);
	if ((emu_flags.sf != emu_flags.of)) { f__1082_0051_0047_3D25(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_008D_000B_C182()
 *
 * @name f__1082_008D_000B_C182
 * @implements 1082:008D:000B:C182 ()
 *
 * Called From: 1082:0071:0047:3D25
 */
void f__1082_008D_000B_C182()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x52);
	if ((emu_flags.sf != emu_flags.of)) { f__1082_0051_0047_3D25(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_008E_000A_018A()
 *
 * @name f__1082_008E_000A_018A
 * @implements 1082:008E:000A:018A ()
 *
 * Called From: 1082:004F:001A:16D1
 */
void f__1082_008E_000A_018A()
{
	emu_cmpws(&emu_si, 0x52);
	if ((emu_flags.sf != emu_flags.of)) { f__1082_0051_0047_3D25(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_0098_001C_39E2()
 *
 * @name f__1082_0098_001C_39E2
 * @implements 1082:0098:001C:39E2 ()
 *
 * Called From: B4B8:1B12:0013:0075
 * Called From: B511:0AA5:000D:8BD5
 */
void f__1082_0098_001C_39E2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F8), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__1082_00BD_001D_48CA(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00B4); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	f__1082_00B4_0026_CE00();
}

/**
 * Decompiled function f__1082_00B4_0026_CE00()
 *
 * @name f__1082_00B4_0026_CE00
 * @implements 1082:00B4:0026:CE00 ()
 *
 * Called From: 1082:00B4:001C:39E2
 */
void f__1082_00B4_0026_CE00()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F6));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00DD; emu_last_cs = 0x1082; emu_last_ip = 0x00C4; emu_last_length = 0x0026; emu_last_crc = 0xCE00; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1C30);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35F6));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_push(emu_cs); emu_push(0x00DA); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__1082_00DA_000A_A6BE();
}

/**
 * Decompiled function f__1082_00BD_001D_48CA()
 *
 * @name f__1082_00BD_001D_48CA
 * @implements 1082:00BD:001D:48CA ()
 *
 * Called From: 1082:00A7:001C:39E2
 */
void f__1082_00BD_001D_48CA()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F6));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00DD; emu_last_cs = 0x1082; emu_last_ip = 0x00C4; emu_last_length = 0x001D; emu_last_crc = 0x48CA; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1C30);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35F6));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35F4));
	emu_push(emu_cs); emu_push(0x00DA); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__1082_00DA_000A_A6BE();
}

/**
 * Decompiled function f__1082_00DA_000A_A6BE()
 *
 * @name f__1082_00DA_000A_A6BE
 * @implements 1082:00DA:000A:A6BE ()
 *
 * Called From: 1082:00DA:0026:CE00
 * Called From: 1082:00DA:001D:48CA
 */
void f__1082_00DA_000A_A6BE()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1C30);
	f__1082_00E4_0002_2597(); return;
}

/**
 * Decompiled function f__1082_00E4_0002_2597()
 *
 * @name f__1082_00E4_0002_2597
 * @implements 1082:00E4:0002:2597 ()
 *
 * Called From: 1082:00E2:000A:A6BE
 */
void f__1082_00E4_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1082_00FD_003A_D7E0()
 *
 * @name f__1082_00FD_003A_D7E0
 * @implements 1082:00FD:003A:D7E0 ()
 *
 * Called From: 0972:0126:006E:C639
 * Called From: 0972:0126:0012:F490
 * Called From: 0972:0126:0040:E14D
 * Called From: 0972:0126:002B:22A3
 * Called From: 0972:0126:0059:A980
 * Called From: 0972:0126:0086:1AD2
 * Called From: 0C3A:13DA:0022:D6F0
 * Called From: 0C3A:1FAF:0022:E6F2
 * Called From: 0C3A:2141:0016:7245
 * Called From: 0C3A:2141:0013:8247
 * Called From: 0C3A:2337:003A:85DA
 * Called From: 10E4:2191:0015:A299
 * Called From: 1423:0076:001A:9364
 * Called From: 1423:0AC5:001A:235A
 * Called From: 1423:0DE7:0029:D1E2
 * Called From: 176C:0DC0:000E:DA27
 * Called From: 176C:25DA:000E:DA27
 * Called From: 176C:29EC:000E:DA27
 * Called From: 1A34:21F5:001A:547E
 * Called From: 1A34:22C3:0010:8B9B
 * Called From: 1A34:335F:000E:DA27
 * Called From: 1A34:33E4:000E:DA27
 * Called From: 1A34:3700:0022:7EB7
 * Called From: B50B:0435:001E:0374
 * Called From: B511:01B3:0023:CF90
 * Called From: B518:0F72:0012:7BEF
 */
void f__1082_00FD_003A_D7E0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1082_0110_0027_2707(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x861C);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFFFF);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0137); emu_Building_Find();
	f__1082_0137_0004_5B1F();
}

/**
 * Decompiled function f__1082_0110_0027_2707()
 *
 * @name f__1082_0110_0027_2707
 * @implements 1082:0110:0027:2707 ()
 *
 * Called From: 1082:0106:003A:D7E0
 */
void f__1082_0110_0027_2707()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFFFF);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0137); emu_Building_Find();
	f__1082_0137_0004_5B1F();
}

/**
 * Decompiled function f__1082_0137_0004_5B1F()
 *
 * @name f__1082_0137_0004_5B1F
 * @implements 1082:0137:0004:5B1F ()
 *
 * Called From: 1082:0137:003A:D7E0
 * Called From: 1082:0137:0027:2707
 */
void f__1082_0137_0004_5B1F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__1082_013B_0002_2597(); return;
}

/**
 * Decompiled function f__1082_013B_0002_2597()
 *
 * @name f__1082_013B_0002_2597
 * @implements 1082:013B:0002:2597 ()
 *
 * Called From: 1082:0139:0004:5B1F
 */
void f__1082_013B_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
