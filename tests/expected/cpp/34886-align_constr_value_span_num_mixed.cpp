// Test: align_constr_value_span_num_mixed - Mixed empty, comment, and PP lines

class BasicCtorAlign
{
public:
BasicCtorAlign(int a, double b, const char *c) :
	memberAlpha   (a),
	longMemberBeta(b),
	m_c           (c)
{
}
};

class MixedLinesCtorAlign
{
public:
MixedLinesCtorAlign(int a, double b, short c, long d,
                    const char *e, float f, unsigned g, char h) :
	memberAlpha   (a),

	longMemberBeta(b),
#ifdef FEATURE_A
	memberGamma   (c),
#endif
	// Initialize delta
	memberDelta   (d),
	memberDelta2  (dd),
	//On same line
	// Comment line 1
	// Comment line 2
	// Comment line 3
	veryLongMemberEpsilon(e),


	memberZeta     (f),
#if 1
#if 1
	memberEta      (g),
#endif
#endif
	// Comment A
	// Comment B
	// Comment C
	longMemberTheta(h),
#if 1
	// Comment A
	// Comment B

	memberOmega    (i),
#endif
#if 1

	memberPhi      (j)
#endif
{
}
};
