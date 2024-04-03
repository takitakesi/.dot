static const char norm_fg[] = "#d0cecc";
static const char norm_bg[] = "#121312";
static const char norm_border[] = "#91908e";

static const char sel_fg[] = "#d0cecc";
static const char sel_bg[] = "#7D8079";
static const char sel_border[] = "#d0cecc";

static const char urg_fg[] = "#d0cecc";
static const char urg_bg[] = "#6D7370";
static const char urg_border[] = "#6D7370";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
