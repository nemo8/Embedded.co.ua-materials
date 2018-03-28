/****************************************************************************
* Character generator
* This table defines the standard ASCII characters in a 16x16 dot format
****************************************************************************
* FileName: font_ukr_16x16.h
* GLCD FontName : glcd_font_ukr_16x16
* GLCD FontSize : 16 x 16
* Author: Ovner (the font is rebuilt by vhoy)
****************************************************************************/

static const char font_ukr_16x16[155][16] =
{ 
{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}, 	/*	0	char:		char code:	32		*/
{0,  0,  0,  0,248,  0,  0,  0,  0,  0,  0,  0, 25,  0,  0,  0}, 	/*	1	char:	!	char code:	33		*/
{0,  0,  0,120,  0,120,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}, 	/*	2	char:	" 	char code:	34		*/
{0, 64,192,120, 64,224,120, 64,  2, 26,  7,  2, 30,  3,  2,  0}, 	/*	3	char:	#	char code:	35		*/
{0,224,144, 16,252, 16, 16, 32,  0,  8, 17, 17,127, 17, 19, 14}, 	/*	4	char:	$	char code:	36		*/
{48, 72, 72, 48,128,128, 64,  0, 0,  2,  1,  1, 12, 18, 18, 12}, 	/*	5	char:	%	char code:	37		*/
{0,  0,240,200,  8,  8,  0,  0,  0, 15, 24, 16, 17, 22,  8, 23}, 	/*	6	char:	&	char code:	38		*/
{0,  0,  0,  0,120,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}, 	/*	7	char:	'	char code:	39		*/
{0,  0,  0,224, 28,  4,  0,  0,  0,  0,  0,  7, 24, 32,  0,  0}, 	/*	8	char:	(	char code:	40		*/
{0,  0,  4, 28,224,  0,  0,  0,  0,  0, 32, 56,  7,  0,  0,  0}, 	/*	9	char:	)	char code:	41		*/
{0,144,160, 96,248, 96,160,144,  0,  0,  0,  0,  1,  0,  0,  0}, 	/*	10	char:	*	char code:	42		*/
{0,  0,  0,  0,224,  0,  0,  0,  0,  1,  1,  1, 15,  1,  1,  1}, 	/*	11	char:	+	char code:	43		*/
{0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 56, 24,  0,  0,  0}, 	/*	12	char:	,	char code:	44		*/
{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  2,  2,  0,  0}, 	/*	13	char:	-	char code:	45		*/
{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 24, 24,  0,  0,  0}, 	/*	14	char:	.	char code:	46		*/
{0,  0,  0,  0,128,112,  8,  0,  0, 64, 56,  6,  1,  0,  0,  0}, 	/*	15	char:	/	char code:	47		*/
{0,224, 16,  8,136,  8, 16,224,  0,  7,  8, 16, 16, 16,  8,  7}, 	/*	16	char:	0	char code:	48		*/
{0,  0, 16,  8,248,  0,  0,  0,  0,  0, 16, 16, 31, 16, 16,  0}, 	/*	17	char:	1	char code:	49		*/
{0, 16,  8,  8,  8,  8,152,112,  0, 16, 24, 20, 18, 19, 17, 16}, 	/*	18	char:	2	char code:	50		*/
{0, 16,  8,136,136,136, 72,112,  0,  8, 16, 16, 16, 16, 25, 15}, 	/*	19	char:	3	char code:	51		*/
{0,  0,128, 96, 48,  8,248,  0,  0,  3,  2,  2,  2,  2, 31,  2}, 	/*	20	char:	4	char code:	52		*/
{0,248, 72, 72, 72, 72,136,  0,  0,  8, 16, 16, 16, 16,  8,  7}, 	/*	21	char:	5	char code:	53		*/
{0,224, 48,152,136,136,136, 16,  0,  7,  9, 16, 16, 16, 25, 15}, 	/*	22	char:	6	char code:	54		*/
{0,  8,  8,  8,  8,200, 56, 24,  0,  0, 16, 12,  3,  0,  0,  0}, 	/*	23	char:	7	char code:	55		*/
{0,112,136,136,136,136,136,112,  0, 15, 25, 16, 16, 16, 25, 15}, 	/*	24	char:	8	char code:	56		*/
{0,240,152,  8,  8,  8,144,224,  0,  8, 17, 17, 17, 25, 12,  7}, 	/*	25	char:	9	char code:	57		*/
{0,  0,  0,192,192,  0,  0,  0,  0,  0,  0, 24, 24,  0,  0,  0}, 	/*	26	char:	:	char code:	58		*/
{0,  0,  0,192,192,  0,  0,  0,  0,  0, 64, 56, 24,  0,  0,  0}, 	/*	27	char:	;	char code:	59		*/
{0,  0,128,128,192, 64, 64, 32,  0,  1,  2,  2,  6,  4,  4,  8}, 	/*	28	char:	<	char code:	60		*/
{0, 64, 64, 64, 64, 64, 64, 64,  0,  2,  2,  2,  2,  2,  2,  2}, 	/*	29	char:	=	char code:	61		*/
{0, 32, 64, 64,192,128,128,  0,  0,  8,  4,  4,  6,  2,  2,  1}, 	/*	30	char:	>	char code:	62		*/
{0, 16,  8,136,200,112,  0,  0,  0,  0,  0, 27,  0,  0,  0,  0}, 	/*	31	char:	?	char code:	63		*/
{0,192, 48, 24,136, 72, 88,240,  0, 15, 48, 32, 71, 72, 72, 15}, 	/*	32	char:	@	char code:	64		*/
{0,  0,192, 48,  8, 48,192,  0,  0, 24,  7,  2,  2,  2,  7, 24}, 	/*	33	char:	A	char code:	65		*/
{0,248,136,136,136,136,136,112,  0, 31, 16, 16, 16, 16, 25, 15}, 	/*	34	char:	B	char code:	66		*/
{0,224, 16,  8,  8,  8,  8, 16,  0,  7,  8, 16, 16, 16, 16,  8}, 	/*	35	char:	C	char code:	67		*/
{0,248,  8,  8,  8,  8, 16,224,  0, 31, 16, 16, 16, 16,  8,  7}, 	/*	36	char:	D	char code:	68		*/
{0,248,136,136,136,136,136,136,  0, 31, 16, 16, 16, 16, 16, 16}, 	/*	37	char:	E	char code:	69		*/
{0,248,136,136,136,136,136,136,  0, 31,  0,  0,  0,  0,  0,  0}, 	/*	38	char:	F	char code:	70		*/
{0,224, 16,  8,  8,  8,  8, 16,  0,  7,  8, 16, 16, 16, 17, 15}, 	/*	39	char:	G	char code:	71		*/
{0,248,128,128,128,128,128,248,  0, 31,  0,  0,  0,  0,  0, 31}, 	/*	40	char:	H	char code:	72		*/
{0,  0,  8,  8,250,  8,  8,  0,  0,  0, 16, 16, 31, 16, 16,  0}, 	/*	41	char:	I	char code:	73		*/
{0,  0,  0,  8,  8,  8,248,  0,  0,  8, 16, 16, 16, 24, 15,  0}, 	/*	42	char:	J	char code:	74		*/
{0,248,128,192, 32, 16,  8,  0,  0, 31,  0,  0,  3,  6,  8, 16}, 	/*	43	char:	K	char code:	75		*/
{0,248,  0,  0,  0,  0,  0,  0,  0, 31, 16, 16, 16, 16, 16, 16}, 	/*	44	char:	L	char code:	76		*/
{0,248, 24,224,  0,224, 24,248,  0, 31,  0,  0,  1,  0,  0, 31}, 	/*	45	char:	M	char code:	77		*/
{0,248, 24, 96,128,  0,  0,248,  0, 31,  0,  0,  1,  6, 24, 31}, 	/*	46	char:	N	char code:	78		*/
{0,224, 16,  8,  8,  8, 16,224,  0,  7,  8, 16, 16, 16,  8,  7}, 	/*	47	char:	O	char code:	79		*/
{0,248,  8,  8,  8,  8,152,240,  0, 31,  1,  1,  1,  1,  1,  0}, 	/*	48	char:	P	char code:	80		*/
{0,224, 16,  8,  8,  8, 16,224,  0,  7,  8, 16, 16, 48,120,  7}, 	/*	49	char:	Q	char code:	81		*/
{0,248,  8,  8,  8,  8,152,240,  0, 31,  1,  1,  1,  1,  2, 12}, 	/*	50	char:	R	char code:	82		*/
{0,112,144,136,  8,  8,  8, 16,  0,  8, 16, 16, 17, 17, 25, 14}, 	/*	51	char:	S	char code:	83		*/
{0,  8,  8,  8,248,  8,  8,  8,  0,  0,  0,  0, 31,  0,  0,  0}, 	/*	52	char:	T	char code:	84		*/
{0,248,  0,  0,  0,  0,  0,248,  0, 15, 24, 16, 16, 16, 24, 15}, 	/*	53	char:	U	char code:	85		*/
{0, 24,224,  0,  0,  0,224, 24,  0,  0,  1, 14, 16, 14,  1,  0}, 	/*	54	char:	V	char code:	86		*/
{120,128,  0,192,192,  0,128,120,  0,  3, 28,  3,  3, 28, 3, 0}, 	/*	55	char:	W	char code:	87		*/
{0,  8, 16, 96,128, 96, 16,  8,  0, 16, 12,  3,  0,  3, 12, 16}, 	/*	56	char:	X	char code:	88		*/
{0,  8, 48,192,128,192, 48,  8,  0,  0,  0,  0, 31,  0,  0,  0}, 	/*	57	char:	Y	char code:	89		*/
{0,  8,  8,  8,136, 72, 56, 24,  0, 24, 28, 18, 17, 16, 16, 16}, 	/*	58	char:	Z	char code:	90		*/
{0,  0,  0,252,  4,  4,  0,  0,  0,  0,  0, 63, 32, 32,  0,  0}, 	/*	59	char:	[	char code:	91		*/
{0,  8,112,128,  0,  0,  0,  0,  0,  0,  0,  1,  6, 56, 64,  0}, 	/*	60	char:	\	char code:	92		*/
{0,  0,  4,  4,252,  0,  0,  0,  0,  0, 32, 32, 63,  0,  0,  0}, 	/*	61	char:	]	char code:	93		*/
{0, 64, 96, 16,  8, 16, 96, 64,  0,  0,  0,  0,  0,  0,  0,  0}, 	/*	62	char:	^	char code:	94		*/
{0,  0,  0,  0,  0,  0,  0,  0,128,128,128,128,128,128,128,128}, 	/*	63	char:	_	char code:	95		*/
{0,  0,  6, 38, 28,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}, 	/*	64	char:	`	char code:	96		*/

{0,  0, 64, 32, 32, 32,192,  0,  0, 14, 17, 17, 17,  9, 31,  0}, 	/*	65	char:	a	char code:	97		*/
{0,252, 96, 32, 32, 96,128,  0,  0, 31,  8, 16, 16, 24,  7,  0}, 	/*	66	char:	b	char code:	98		*/
{0,128, 64, 32, 32, 32, 64,  0,  0,  7,  8, 16, 16, 16,  8,  0}, 	/*	67	char:	c	char code:	99		*/
{0,128, 96, 32, 32, 96,252,  0,  0,  7, 24, 16, 16,  8, 31,  0}, 	/*	68	char:	d	char code:	100		*/
{0,128, 96, 32, 32, 96,192,  0,  0,  7,  9, 17, 17, 17,  9,  0}, 	/*	69	char:	e	char code:	101		*/
{0, 32, 32,248, 36, 36, 36,  0,  0,  0,  0, 31,  0,  0,  0,  0}, 	/*	70	char:	f	char code:	102		*/
{0,128, 96, 32, 32, 64,224,  0,  0,  7, 88,144,144,136,127,  0}, 	/*	71	char:	g	char code:	103		*/
{0,252, 64, 32, 32, 32,192,  0,  0, 31,  0,  0,  0,  0, 31,  0}, 	/*	72	char:	h	char code:	104		*/
{0,  0, 64, 64,200, 64, 64,  0,  0, 16, 16, 16, 31, 16, 16, 16}, 	/*	73	char:	i	char code:	105		*/
{0,  0, 32, 32,236,  0,  0,  0,  0,128,128,128,127,  0,  0,  0}, 	/*	74	char:	j	char code:	106		*/
{0,252,  0,128, 64, 32,  0,  0,  0, 31,  1,  1,  6,  8, 16,  0}, 	/*	75	char:	k	char code:	107		*/
{4,  4,  4,252,  0,  0,  0,  0,  0,  0,  0, 15, 16, 16, 16,  0}, 	/*	76	char:	l	char code:	108		*/
{0,224, 32, 32,224, 32, 32,192,  0, 31,  0,  0, 31,  0,  0, 31}, 	/*	77	char:	m	char code:	109		*/
{0,224, 64, 32, 32, 32,192,  0,  0, 31,  0,  0,  0,  0, 31,  0}, 	/*	78	char:	n	char code:	110		*/
{0,192, 96, 32, 32, 96,192,  0,  0, 15, 24, 16, 16, 24, 15,  0}, 	/*	79	char:	o	char code:	111		*/
{0,224, 64, 32, 32, 96,128,  0,  0,255, 24, 16, 16, 24,  7,  0}, 	/*	80	char:	p	char code:	112		*/
{0,128, 96, 32, 32, 64,224,  0,  0,  7, 24, 16, 16,  8,255,  0}, 	/*	81	char:	q	char code:	113		*/
{0,  0,224, 96, 32, 32, 64,  0,  0,  0, 31,  0,  0,  0,  0,  0}, 	/*	82	char:	r	char code:	114		*/
{0,192, 32, 32, 32, 32, 64,  0,  0,  9, 17, 17, 18, 18, 14,  0}, 	/*	83	char:	s	char code:	115		*/
{0, 32, 32,248, 32, 32, 32,  0,  0,  0,  0, 15, 16, 16, 16,  0}, 	/*	84	char:	t	char code:	116		*/
{0,224,  0,  0,  0,  0,224,  0,  0, 15, 16, 16, 16,  8, 31,  0}, 	/*	85	char:	u	char code:	117		*/
{0, 96,128,  0,  0,128, 96,  0,  0,  0,  3, 28, 28,  3,  0,  0}, 	/*	86	char:	v	char code:	118		*/
{224,  0,  0,128,128,  0,  0,224,  0,  7, 24,  7,  7, 24,  7,0}, 	/*	87	char:	w	char code:	119		*/
{0, 32, 64,128,128, 64, 32,  0,  0, 16, 12,  3,  3, 12, 16,  0}, 	/*	88	char:	x	char code:	120		*/
{0, 32,192,  0,  0,128, 96,  0,  0,  0,129,198, 60,  3,  0,  0}, 	/*	89	char:	y	char code:	121		*/
{0, 32, 32, 32, 32,160, 96,  0,  0, 24, 20, 18, 17, 16, 16,  0}, 	/*	90	char:	z	char code:	122		*/


{0,  0,192, 48,  8, 48,192,  0,  0, 24,  7,  2,  2,  2,  7, 24}, 	/*	91	char:	A	char code:	1040	*/
{0,248,136,136,136,136,136,  8,  0, 31, 16, 16, 16, 16, 25, 15}, 	/*	92	char:	Б	char code:	1041	*/
{0,248,136,136,136,136,136,112,  0, 31, 16, 16, 16, 16, 25, 15}, 	/*	93	char:	B	char code:	1042	*/
{0,248,  8,  8,  8, 24,  0,  0,  0, 31,  0,  0,  0,  0,  0,  0}, 	/*	94	char:	Г	char code:	1043	*/
{0,224, 16,  8,  8,  8,248,  0,112, 31, 16, 16, 16, 16, 31,112}, 	/*	95	char:	Д	char code:	1044	*/
{0,248,136,136,136,136,136,136,  0, 31, 16, 16, 16, 16, 16, 16}, 	/*	96	char:	Е	char code:	1045	*/
{0, 24,112,192,248,192,112, 24,  0, 28,  3,  0, 31,  0,  3, 28}, 	/*	97	char:	Ж	char code:	1046	*/
{0, 16,  8,136,136,136, 72, 48,  0,  8, 16, 16, 16, 16, 25, 14}, 	/*	98	char:	З	char code:	1047	*/
{0,248,  0,  0,128, 96, 24,248,  0, 31, 28,  6,  1,  0,  0, 31}, 	/*	99	char:	И	char code:	1048	*/
{0,248,  1,  2,130, 97, 24,248,  0, 31, 28,  6,  1,  0,  0, 31}, 	/*	100 char:	Й	char code:	1049	*/
{0,248,128,192, 32, 16,  8,  0,  0, 31,  0,  0,  3,  6,  8, 16}, 	/*	101 char:	К	char code:	1050	*/
{0,  0,248,  8,  8,  8,  8,248, 16, 24, 15,  0,  0,  0,  0, 31}, 	/*	102	char:	Л	char code:	1051	*/
{0,248, 24,224,  0,224, 24,248,  0, 31,  0,  0,  1,  0,  0, 31}, 	/*	103	char:	M	char code:	1052	*/
{0,248,128,128,128,128,128,248,  0, 31,  0,  0,  0,  0,  0, 31}, 	/*	104	char:	H	char code:	1053	*/
{0,224, 16,  8,  8,  8, 16,224,  0,  7,  8, 16, 16, 16,  8,  7}, 	/*	105	char:	O	char code:	1054	*/
{0,248,  8,  8,  8,  8,  8,248,  0, 31,  0,  0,  0,  0,  0, 31}, 	/*	106	char:	П	char code:	1055	*/
{0,248,  8,  8,  8,  8,152,240,  0, 31,  1,  1,  1,  1,  1,  0}, 	/*	107	char:	P	char code:	1056	*/
{0,224, 16,  8,  8,  8,  8, 16,  0,  7,  8, 16, 16, 16, 16,  8}, 	/*	108	char:	C	char code:	1057	*/
{0,  8,  8,  8,248,  8,  8,  8,  0,  0,  0,  0, 31,  0,  0,  0}, 	/*	109	char:	T	char code:	1058	*/
{0,  8, 48,192,  0,128,112,  8,  0,  0, 16, 16, 15,  3,  0,  0}, 	/*	110	char:	У	char code:	1059	*/
{0,224, 48, 16,248, 16, 48,224,  0,  3, 12,  8, 31,  8, 12,  7}, 	/*	111	char:	Ф	char code:	1060	*/
{0,  8, 16, 96,128, 96, 16,  8,  0, 16, 12,  3,  0,  3, 12, 16}, 	/*	112	char:	X	char code:	1061	*/
{0,248,  0,  0,  0,  0,248,  0,  0, 31, 16, 16, 16, 16, 31,112}, 	/*	113	char:	Ц	char code:	1062	*/
{0,248,  0,  0,  0,  0,  0,248,  0,  0,  1,  1,  1,  1,  1, 31}, 	/*	114	char:	Ч	char code:	1063	*/
{0,248,  0,  0,248,  0,  0,248,  0, 31, 16, 16, 31, 16, 16, 31}, 	/*	115	char:	Ш	char code:	1064	*/
{248, 0, 0,248,  0,  0,248,  0, 31, 16, 16, 31, 16, 16, 31,112}, 	/*	116	char:	Щ	char code:	1065	*/
{0,  0,248,	 8,  8,	 8,	14,	 0,	 0,  0,	31,  0,  0,  0,  0,  0}, 	/*	117	char:	Ґ	char code:			*/
{0,  0,	10,	10,248,	10,	10,	 0,	 0,  0,	16,	16,	31,	16,	16,  0}, 	/*	118	char:	Ї	char code:			*/
{0,248,128,128,128,128,128,  0,  0, 31, 16, 16, 16, 16, 25, 15}, 	/*	119	char:	Ь	char code:	1068	*/
{0,224,144,136,136,136,	 8,	16,  0,	 7,	 8,	16,	16,	16,	16,	 8}, 	/*	120	char:	Є	char code:			*/
{0,248,128,240, 24,  8, 24,240,  0, 31,  0, 15, 24, 16, 24, 15}, 	/*	121	char:	Ю	char code:	1070	*/
{0,  0,240,152,  8,  8,  8,248,  0, 16,  8,  7,  1,  1,  1, 31}, 	/*	122	char:	Я	char code:	1071	*/

{0,  0, 64, 32, 32, 32,192,  0,  0, 14, 17, 17, 17,  9, 31,  0}, 	/*	123	char:	а	char code:	1072	*/
{0,240,120, 40, 36,100,192,  0,  0, 15, 24, 16, 16, 24, 15,  0}, 	/*	124	char:	б	char code:	1073	*/
{0,224, 32, 32, 32, 32,192,  0,  0, 31, 17, 17, 17, 17, 14,  0}, 	/*	125	char:	в	char code:	1074	*/
{0,  0,224, 32, 32, 32, 96,  0,  0,  0, 31,  0,  0,  0,  0,  0}, 	/*	126	char:	г	char code:	1075	*/
{0,  0,224, 32, 32, 32,224,  0,  0,112, 31, 16, 16, 16, 31,112}, 	/*	127	char:	д	char code:	1076	*/
{0,192, 32, 32, 32, 32,192,  0,  0,  7,  9, 17, 17, 17,  9,  0}, 	/*	128	char:	е	char code:	1077	*/
{0, 32,224,128,224,128,224, 32,  0, 24,  6,  3, 31,  3,  6, 24}, 	/*	129	char:	ж	char code:	1078	*/
{0, 64, 32, 32, 32, 32,192,  0,  0,  8, 16, 17, 17, 17, 14,  0}, 	/*	130	char:	з	char code:	1079	*/
{0,224,  0,  0,  0,192,224,  0,  0, 31,  8,  6,  1,  0, 31,  0}, 	/*	131	char:	и	char code:	1080	*/
{0,224,  0,  8, 16,200,224,  0,  0, 31,  8,  6,  1,  0, 31,  0}, 	/*	132	char:	й	char code:	1081	*/
{0,224,  0,128, 64, 32,  0,  0,  0, 31,  1,  1,  6,  8, 16,  0}, 	/*	133	char:	к	char code:	1082	*/
{0,  0,224, 32, 32, 32,224,  0,  16, 16, 15,  0,  0,  0,31,  0}, 	/*	134	char:	л	char code:	1083	*/
{0,224,192,  0,  0,  0,192,224,  0, 31,  0,  3,  4,  3,  0, 31}, 	/*	135	char:	м	char code:	1084	*/
{0,224,  0,  0,  0,  0,224,  0,  0, 31,  1,  1,  1,  1, 31,  0}, 	/*	136	char:	н	char code:	1085	*/
{0,192, 96, 32, 32, 96,192,  0,  0, 15, 24, 16, 16, 24, 15,  0}, 	/*	137	char:	о	char code:	1086	*/
{0,224, 32, 32, 32, 32,224,  0,  0, 31,  0,  0,  0,  0, 31,  0}, 	/*	138	char:	п	char code:	1087	*/
{0,224, 64, 32, 32, 96,128,  0,  0,255, 24, 16, 16, 24,  7,  0}, 	/*	139	char:	р	char code:	1088	*/
{0,128, 64, 32, 32, 32, 64,  0,  0,  7,  8, 16, 16, 16,  8,  0}, 	/*	140	char:	с	char code:	1089	*/
{0,  0, 32, 32,224, 32, 32,  0,  0,  0,  0,  0, 31,  0,  0,  0}, 	/*	141	char:	т	char code:	1090	*/
{0, 32,192,  0,  0,128, 96,  0,  0,  0,129,198, 60,  3,  0,  0}, 	/*	142	char:	у	char code:	1091	*/
{0,192, 96, 32,252, 32, 96,192,  0, 15, 24, 16,255, 16, 24, 15}, 	/*	143	char:	ф	char code:	1092	*/
{0, 32, 64,128,128, 64, 32,  0,  0, 16, 12,  3,  3, 12, 16,  0}, 	/*	144	char:	х	char code:	1093	*/
{0,224,  0,  0,  0,  0,224,  0,  0, 31, 16, 16, 16, 16, 31,112}, 	/*	145	char:	ц	char code:	1094	*/
{0,224,  0,  0,  0,  0,224,  0,  0,  1,  2,  2,  2,  2, 31,  0}, 	/*	146	char:	ч	char code:	1095	*/
{0,224,  0,  0,224,  0,  0,224,  0, 31, 16, 16, 31, 16, 16, 31}, 	/*	147	char:	ш	char code:	1096	*/
{0,224,  0,  0,224,  0,  0,224,  0, 31, 16, 16, 31, 16, 16,127}, 	/*	148	char:	щ	char code:	1097	*/
{0,  0,224, 32, 32, 32, 56,  0,  0,  0, 31,  0,  0,  0,  0,  0}, 	/*	149	char:	ґ	char code:	    	*/
{0,  0, 64,	72,192,	72, 64,	 0,	 0,	16,	16,	16,	31,	16,	16,  0}, 	/*	150	char:	ї	char code:	    	*/
{0,224,  0,  0,  0,  0,  0,  0,  0, 31, 17, 17, 17, 17, 14,  0}, 	/*	151	char:	ь	char code:	1100	*/
{0,  0,192,	32,	32,	32,	64,  0,  0,  0,  7,	9,	 9,	 8,  4,	 0}, 	/*	152	char:	є	char code:	     	*/
{0,224,  0,192, 96, 32, 96,192,  0, 31,  2, 15, 24, 16, 24, 15}, 	/*	153	char:	ю	char code:	1102	*/
{0,192, 32, 32, 32,224,  0,  0,  0, 17, 14,  2,  2, 31,  0,  0} 	/*	154	char:	я	char code:	1103	*/
};		
	
//	non-standard characters
/*	41	char:	I		*/
/*	117	char:	Ґ		*/
/*	118	char:	Ї		*/
/*	120	char:	Є		*/
/*	73	char:	i		*/
/*	149	char:	ґ	 	*/
/*	150	char:	ї	 	*/
/*	152	char:	є	  	*/