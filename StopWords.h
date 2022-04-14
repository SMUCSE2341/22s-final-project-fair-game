//
// Created by dshar on 4/9/2022.
//

#ifndef INC_22S_FINAL_PROJ_STOPWORDS_H
#define INC_22S_FINAL_PROJ_STOPWORDS_H

#include <string>
#include <unordered_set>

struct StopWords {
    std::unordered_set<std::string> lexicon = {
            "a",
            "able",
            "about",
            "above",
            "abst",
            "accordance",
            "according",
            "accordingly",
            "across",
            "act",
            "actually",
            "added",
            "adj",
            "affected",
            "affecting",
            "affects",
            "after",
            "afterwards",
            "again",
            "against",
            "ah",
            "all",
            "almost",
            "alone",
            "along",
            "already",
            "also",
            "although",
            "always",
            "am",
            "among",
            "amongst",
            "an",
            "and",
            "announce",
            "another",
            "any",
            "anybody",
            "anyhow",
            "anymore",
            "anyone",
            "anything",
            "anyway",
            "anyways",
            "anywhere",
            "apparently",
            "approximately",
            "are",
            "aren",
            "arent",
            "arise",
            "around",
            "as",
            "aside",
            "ask",
            "asking",
            "at",
            "auth",
            "available",
            "away",
            "awfully",
            "b",
            "back",
            "be",
            "became",
            "because",
            "become",
            "becomes",
            "becoming",
            "been",
            "before",
            "beforehand",
            "begin",
            "beginning",
            "beginnings",
            "begins",
            "behind",
            "being",
            "believe",
            "below",
            "beside",
            "besides",
            "between",
            "beyond",
            "biol",
            "both",
            "brief",
            "briefly",
            "but",
            "by",
            "c",
            "ca",
            "came",
            "can",
            "cannot",
            "cant",
            "cause",
            "causes",
            "certain",
            "certainly",
            "co",
            "com",
            "come",
            "comes",
            "contain",
            "containing",
            "contains",
            "could",
            "couldnt",
            "d",
            "date",
            "did",
            "didnt",
            "different",
            "do",
            "does",
            "doesnt",
            "doing",
            "done",
            "dont",
            "down",
            "downwards",
            "due",
            "during",
            "e",
            "each",
            "ed",
            "edu",
            "effect",
            "eg",
            "eight",
            "eighty",
            "either",
            "else",
            "elsewhere",
            "end",
            "ending",
            "enough",
            "especially",
            "et",
            "et-al",
            "etc",
            "even",
            "ever",
            "every",
            "everybody",
            "everyone",
            "everything",
            "everywhere",
            "ex",
            "except",
            "f",
            "far",
            "few",
            "ff",
            "fine",
            "fifth",
            "first",
            "five",
            "fix",
            "followed",
            "following",
            "follows",
            "for",
            "former",
            "formerly",
            "forth",
            "found",
            "four",
            "from",
            "further",
            "furthermore",
            "g",
            "gave",
            "get",
            "gets",
            "getting",
            "give",
            "given",
            "gives",
            "giving",
            "go",
            "goes",
            "gone",
            "got",
            "gotten",
            "h",
            "had",
            "happens",
            "hardly",
            "has",
            "hasnt",
            "have",
            "havent",
            "having",
            "he",
            "hed",
            "hence",
            "her",
            "here",
            "hereafter",
            "hereby",
            "herein",
            "heres",
            "hereupon",
            "hers",
            "herself",
            "hes",
            "hi",
            "hid",
            "him",
            "himself",
            "his",
            "hither",
            "home",
            "how",
            "howbeit",
            "however",
            "hundred",
            "i",
            "id",
            "ie",
            "if",
            "ill",
            "im",
            "immediate",
            "immediately",
            "importance",
            "important",
            "in",
            "inc",
            "indeed",
            "index",
            "information",
            "instead",
            "into",
            "invention",
            "inward",
            "is",
            "isnt",
            "it",
            "itd",
            "itll",
            "its",
            "itself",
            "ive",
            "j",
            "just",
            "k",
            "keep 	keeps",
            "kept",
            "kg",
            "km",
            "know",
            "known",
            "knows",
            "l",
            "largely",
            "last",
            "lately",
            "later",
            "latter",
            "latterly",
            "least",
            "less",
            "lest",
            "let",
            "lets",
            "like",
            "liked",
            "likely",
            "line",
            "little",
            "Ill",
            "look",
            "looking",
            "looks",
            "ltd",
            "m",
            "made",
            "mainly",
            "make",
            "makes",
            "many",
            "may",
            "maybe",
            "me",
            "mean",
            "means",
            "meantime",
            "meanwhile",
            "merely",
            "mg",
            "might",
            "million",
            "miss",
            "ml",
            "more",
            "moreover",
            "most",
            "mostly",
            "mr",
            "mrs",
            "much",
            "mug",
            "must",
            "my",
            "myself",
            "n",
            "na",
            "name",
            "namely",
            "nay",
            "nd",
            "near",
            "nearly",
            "necessarily",
            "necessary",
            "need",
            "needs",
            "neither",
            "never",
            "nevertheless",
            "new",
            "next",
            "nine",
            "ninety",
            "no",
            "nobody",
            "non",
            "none",
            "nonetheless",
            "noone",
            "nor",
            "normally",
            "nos",
            "not",
            "noted",
            "nothing",
            "now",
            "nowhere",
            "o",
            "obtain",
            "obtained",
            "obviously",
            "of",
            "off",
            "often",
            "oh",
            "ok",
            "okay",
            "old",
            "omitted",
            "on",
            "once",
            "one",
            "ones",
            "only",
            "onto",
            "or",
            "ord",
            "other",
            "others",
            "otherwise",
            "ought",
            "our",
            "ours",
            "ourselves",
            "out",
            "outside",
            "over",
            "overall",
            "owing",
            "own",
            "p",
            "page",
            "pages",
            "part",
            "particular",
            "particularly",
            "past",
            "per",
            "perhaps",
            "placed",
            "please",
            "plus",
            "poorly",
            "possible",
            "possibly",
            "potentially",
            "pp",
            "predominantly",
            "present",
            "previously",
            "primarily",
            "probably",
            "promptly",
            "proud",
            "provides",
            "put",
            "q",
            "que",
            "quickly",
            "quite",
            "qv",
            "r",
            "ran",
            "rather",
            "rd",
            "re",
            "readily",
            "really",
            "recent",
            "recently",
            "ref",
            "refs",
            "regarding",
            "regardless",
            "regards",
            "related",
            "relatively",
            "research",
            "respectively",
            "resulted",
            "resulting",
            "results",
            "right",
            "run",
            "s",
            "said",
            "same",
            "saw",
            "say",
            "saying",
            "says",
            "sec",
            "section",
            "see",
            "seeing",
            "seem",
            "seemed",
            "seeming",
            "seems",
            "seen",
            "self",
            "selves",
            "sent",
            "seven",
            "several",
            "shall",
            "she",
            "shed",
            "shell",
            "shes",
            "should",
            "shouldnt",
            "show",
            "showed",
            "shown",
            "showns",
            "shows",
            "significant",
            "significantly",
            "similar",
            "similarly",
            "since",
            "six",
            "slightly",
            "so",
            "some",
            "somebody",
            "somehow",
            "someone",
            "somethan",
            "something",
            "sometime",
            "sometimes",
            "somewhat",
            "somewhere",
            "soon",
            "sorry",
            "specifically",
            "specified",
            "specify",
            "specifying",
            "still",
            "stop",
            "strongly",
            "sub",
            "substantially",
            "successfully",
            "such",
            "sufficiently",
            "suggest",
            "sup",
            "sure 	t",
            "take",
            "taken",
            "taking",
            "tell",
            "tends",
            "th",
            "than",
            "thank",
            "thanks",
            "thanx",
            "that",
            "thatll",
            "thats",
            "thatve",
            "the",
            "their",
            "theirs",
            "them",
            "themselves",
            "then",
            "thence",
            "there",
            "thereafter",
            "thereby",
            "thered",
            "therefore",
            "therein",
            "therell",
            "thereof",
            "therere",
            "theres",
            "thereto",
            "thereupon",
            "thereve",
            "these",
            "they",
            "theyd",
            "theyll",
            "theyre",
            "theyve",
            "think",
            "this",
            "those",
            "thou",
            "though",
            "thoughh",
            "thousand",
            "throug",
            "through",
            "throughout",
            "thru",
            "thus",
            "til",
            "tip",
            "to",
            "together",
            "too",
            "took",
            "toward",
            "towards",
            "tried",
            "tries",
            "truly",
            "try",
            "trying",
            "ts",
            "twice",
            "two",
            "u",
            "un",
            "under",
            "unfortunately",
            "unless",
            "unlike",
            "unlikely",
            "until",
            "unto",
            "up",
            "upon",
            "ups",
            "us",
            "use",
            "used",
            "useful",
            "usefully",
            "usefulness",
            "uses",
            "using",
            "usually",
            "v",
            "value",
            "various",
            "Ive",
            "very",
            "via",
            "viz",
            "vol",
            "vols",
            "vs",
            "w",
            "want",
            "wants",
            "was",
            "wasnt",
            "way",
            "we",
            "wed",
            "welcome",
            "we'll",
            "went",
            "were",
            "werent",
            "weve",
            "what",
            "whatever",
            "whatll",
            "whats",
            "when",
            "whence",
            "whenever",
            "where",
            "whereafter",
            "whereas",
            "whereby",
            "wherein",
            "wheres",
            "whereupon",
            "wherever",
            "whether",
            "which",
            "while",
            "whim",
            "whither",
            "who",
            "whod",
            "whoever",
            "whole",
            "wholl",
            "whom",
            "whomever",
            "whos",
            "whose",
            "why",
            "widely",
            "willing",
            "wish",
            "with",
            "within",
            "without",
            "wont",
            "words",
            "world",
            "would",
            "wouldnt",
            "www",
            "x",
            "y",
            "yes",
            "yet",
            "you",
            "youd",
            "youll",
            "your",
            "youre",
            "yours",
            "yourself",
            "yourselves",
            "youve",
            "z",
            "zero",
    };

    std::unordered_set<unsigned int> hashedLexicon = {
            507914862,
            2294410603,
            1187474348,
            3908166010,
            4272591627,
            3134209855,
            2925561482,
            3966211549,
            2081904153,
            123698636,
            3299698707,
            2014882828,
            2719007464,
            979224233,
            3482476458,
            2982417884,
            576455388,
            3718260736,
            210689,
            773648564,
            684754742,
            237883081,
            2260761246,
            409748418,
            1340141361,
            453011996,
            4135570270,
            2543958715,
            219452191,
            873256024,
            785438618,
            2419162807,
            1578816409,
            1534771640,
            1176232528,
            1821640016,
            2313238540,
            2465648121,
            242141738,
            1152690316,
            4036435556,
            70413155,
            2705863075,
            3938921586,
            2216922302,
            1518557880,
            1319095349,
            374030878,
            699578976,
            4003696704,
            3754567962,
            3596378290,
            4051059050,
            270370824,
            3609495632,
            382770657,
            802530127,
            1853340883,
            787266972,
            1454894926,
            4194303474,
            3715846130,
            2482358141,
            3343006789,
            3930137849,
            1766770064,
            719139501,
            3104366154,
            3553332510,
            1709699930,
            1494487360,
            2173898237,
            3093035995,
            2790040208,
            2443468701,
            2079418637,
            774872819,
            3185548874,
            2662179669,
            1415183033,
            2455354623,
            1893067918,
            3047294522,
            856243734,
            3309714856,
            1367025083,
            1410351577,
            114778083,
            199194996,
            184680703,
            3933179443,
            611974285,
            3377905796,
            2457095917,
            2161720286,
            855646997,
            917258859,
            3500277027,
            1254033166,
            1789773401,
            2335603048,
            2068878742,
            1634087588,
            3212587077,
            2421283982,
            3526553324,
            3693129315,
            586527027,
            741671806,
            1894964364,
            1146565749,
            884815043,
            2826741696,
            961214117,
            1463655667,
            3136430639,
            466278256,
            4134371081,
            3298146401,
            26046082,
            2558064283,
            576485181,
            2629425159,
            2727129150,
            2333201736,
            3149655340,
            1073582001,
            3196637810,
            3677898657,
            986682914,
            3987895661,
            4122951616,
            1250099534,
            174287401,
            1865702759,
            3122253078,
            1686605006,
            990445352,
            218183597,
            3641393281,
            513717449,
            4211415302,
            3564925898,
            1352936814,
            1087632761,
            1505305330,
            3339076687,
            3152422947,
            1595332758,
            1417344945,
            2363035277,
            1049211659,
            3584022515,
            4133979808,
            3436848368,
            1854720281,
            1120576925,
            3200539922,
            1909513278,
            2806107081,
            3017632922,
            3718225486,
            1797242801,
            3658641463,
            1823850950,
            3426634790,
            2919338582,
            1417316418,
            311634614,
            1119288934,
            4017352318,
            2329683762,
            2913986751,
            4048757154,
            1036523241,
            1473575415,
            1623077903,
            2419009312,
            1478159851,
            2820481557,
            472408351,
            174172872,
            3114023749,
            1328758945,
            3631430364,
            3412426122,
            4241821469,
            661891020,
            867034982,
            2489235390,
            1764336118,
            3591996445,
            2861007939,
            2553799435,
            1568840494,
            3799496291,
            3432554106,
            524595855,
            3411003760,
            2784388751,
            3115809110,
            3832947218,
            1965123276,
            3592588197,
            3247811561,
            735502803,
            2815292981,
            930628220,
            1033555502,
            3496144512,
            1283238314,
            1871331935,
            1991278725,
            3287695801,
            3803958182,
            1457993371,
            2605692165,
            2510142725,
            1811397599,
            1539355948,
            3061177862,
            1316328985,
            4007504060,
            3648627321,
            3251593175,
            1753329760,
            1184803416,
            3909664385,
            2660477150,
            503248066,
            277422933,
            2450181810,
            1253997035,
            2770490102,
            4147961056,
            4046273074,
            437374796,
            3187368804,
            3112317326,
            520861811,
            418863848,
            1873335464,
            157628794,
            2018627107,
            983724232,
            4002812134,
            453704926,
            669993651,
            3868058876,
            49486541,
            2786200120,
            2895691353,
            1172640088,
            4259083172,
            1760601335,
            3083571812,
            3944887676,
            3402034718,
            4047577659,
            3316704858,
            4170491747,
            3800271904,
            4006110634,
            2281762091,
            1860778413,
            2389398680,
            3754765511,
            561695034,
            3705944386,
            4158165053,
            1964909639,
            2044970554,
            1279408477,
            4138239128,
            612433811,
            2442280275,
            86100178,
            2738475058,
            1093101386,
            3733494743,
            3033666947,
            3869714374,
            3577394544,
            3252703826,
            1535179472,
            331123484,
            3143362755,
            153022210,
            2861414644,
            1544958031,
            1838382198,
            2247942080,
            485749766,
            727704348,
            3760068944,
            4049505716,
            354753458,
            481656971,
            1178641733,
            2547649078,
            2155987943,
            4185675476,
            4100622355,
            1722430631,
            2664207292,
            3123472487,
            2782118524,
            928281539,
            1024707081,
            938305419,
            2705279572,
            4139765090,
            3011599694,
            277976556,
            3717831448,
            1505921011,
            1437194467,
            4052888644,
            3471230293,
            3649884771,
            3649446326,
            648267120,
            44712921,
            1634665676,
            2511478872,
            2741664370,
            1221194319,
            2628643515,
            1483528761,
            3014352766,
            3732668766,
            1687308260,
            1997041675,
            2910773401,
            2128338666,
            2373959811,
            3147414193,
            3270420223,
            968647505,
            474207288,
            3942163533,
            821813684,
            337448102,
            955819482,
            345742908,
            1876832144,
            3677782769,
            3823995210,
            2828697530,
            2986618772,
            3981772979,
            3987192241,
            3428888725,
            2832415439,
            235477830,
            37419644,
            1487085554,
            2531030281,
            3234438769,
            1907011331,
            839589973,
            1359201276,
            1300310646,
            1035353815,
            92454421,
            4020864589,
            2240083369,
            200755981,
            4194154213,
            526356621,
            2105876348,
            1081660896,
            2475542226,
            1236522605,
            4103562686,
            2636597083,
            653482245,
            1127451158,
            1420018402,
            3116346685,
            1037203903,
            1713246177,
            1021917554,
            417843051,
            3030838098,
            1649558278,
            2889804398,
            3090613030,
            1244454959,
            3215871415,
            918055207,
            3023942693,
            99056240,
            3490541804,
            184814590,
            4197183981,
            3216693090,
            452427236,
            1022253178,
            803186234,
            2282081624,
            1953393735,
            1923267751,
            3999425711,
            3144524129,
            3998839497,
            3940563792,
            2024056114,
            3036751653,
            410388061,
            2346261725,
            1927798025,
            3113828199,
            4199102444,
            1753540277,
            1120516743,
            2137934433,
            3305792442,
            171263345,
            3648175711,
            1008076705,
            2893827678,
            2947839351,
            1904891566,
            1247910433,
            2477727216,
            4167163824,
            3716654052,
            3148908385,
            1546009314,
            645770274,
            1684704806,
            1906250661,
            1926270438,
            97547305,
            2645417638,
            2507362088,
            833038055,
            1669223197,
            4117561957,
            4278682534,
            1219203555,
            153647704,
            4148528298,
            1128100044,
            1213194933,
            1130956618,
            1532981026,
            2537881421,
            854058382,
            3152403169,
            857103932,
            2839007213,
            2053442105,
            4290341859,
            736594090,
            1111211906,
            1863981264,
            339700390,
            3332914716,
            3176344810,
            2890063691,
            955396665,
            762845796,
            2268765031,
            429090345,
            3609857337,
            1281592050,
            4269390382,
            770259223,
            1068937391,
            1150782647,
            724189177,
            2711608903,
            1523530991,
            2496880224,
            4116323941,
            108752786,
            3118086971,
            1066475832,
            2540191761,
            4093698898,
            434367215,
            2207733286,
            207364753,
            2412545152,
            3280098246,
            3200791121,
            3353069197,
            2019506399,
            791643465,
            2366647013,
            2661860465,
            111209286,
            2502405772,
            855850719,
            1931697162,
            3888512253,
            595846162,
            906776280,
            2379749876,
            93353151,
            3957829424,
            1238800062,
            2356762104,
            3152115750,
            371695581,
            3994746013,
            1292115443,
            1327174097,
            707456848,
            3624085622,
            3944691458,
            3388501987,
            2444139356,
            1915613365,
            3832949005,
            3750180355,
            3895298549,
            3859701620,
            2193728854,
            153809345,
            1214781180,
            3324493116,
            2024066280,
            1301811086,
            2596859573,
            3919361659,
            2070424757,
            3543038944,
            130101027,
            3510836079,
            1203328959,
            4270328307,
            623894518,
            2225021803,
            3608525426,
            2672003672,
            98446397,
            27409611,
            3259408271,
            4166800675,
            270912439,
            2919982690,
            41100464,
            2776451993,
            2415400223,
            239675861,
            2669315076,
            945089076,
            3543251129,
            2735948894,
            3354643332,
            3072971198,
            1151743663,
            3222080045,
            2739111108,
            2791124448,
            3234786249,
            4157346251,
            4074455,
            2993653400,
            1755203275,
            42305743,
            2379695466,
            1263548135,
            2227514686,
            2972952851,
            2038743972,
            1115611502,
            1307375456,
            3583683220,
            436575066,
            3943334694,
            1570108885,
            53571794,
            2738628504,
            2161713952,
            4063079757,
            672916109,
            2202782707,
            1060079025,
            3899918108,
            417185798,
            437705846,
            2595493356,
            3548135017,
            2351849693,
            3323822613,
            730041768,
            2691010878,
            1279289739,
            4174382548,
            249152729,
            320708141,
            3844122765,
            1099623009,
            1288137227,
            930464857,
            2961760091,
            2492655904,
            1155752160,
            409609785,
            3988652975,
            3774877087,
            417653809,
            2198097345,
            1622448889,
            4043608375,
            3141719697,
            1263381592,
            2832139836,
            742922006,
            3146829108,
            905661987,
            4049507858,
            3691071523,
            4240621861,
            3348664379,
            2744886805,
            3078272070,
            4272481057,
            673836268,
            260401466,
            2825512349,
            2859461800,
            1220899395,
            906748303,
            2294629755,
            578504216,
            2895762802,
            1573077016,
            726145497,
            306025597,
            3805219422,
            928270507,
            324375059,
            3369460835,
            952887567,
            1116245624,
            1778217553,
            2238762811,
            3880585080,
            362608735,
            616778747,
            1741135536,
            1236253684,
            1172457520,
            4056524904,
            2308165615,
            26410789,
            2726826099,
            3045185423,
            2270625286,
            3574253858,
            3536462927,
            1173500762,
            1944651856,
            1669925062,
            506904890,
            2457086531,
            4141327392,
            571378151,
            860983475,
            4014980098,
            3663138358,
            2495435076
    };
};

#endif //INC_22S_FINAL_PROJ_STOPWORDS_H
