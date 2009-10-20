        \context Staff = "soprano" <<
            \set Staff.instrumentName = "Soprano"
            \set Staff.shortInstrumentName = "S."
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 2" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

		\key d \major
		\clef "treble"
                \skip 1 
	\transpose c'' c' {
                R1*4  |
                d'' 8 d'' d'' d'' ~ d'' a' 4.  |
                e'' 4 fis'' 8 e'' 4. r4  |
                d'' 8 d'' d'' d'' ~ d'' a' 4 d'' 8  |
                e'' 8 e'' fis'' e'' 4. r4  |
%% 10
                d'' 8 d'' d'' d'' ~ d'' a' 4 d'' 8  |
                e'' 4 fis'' 8 e'' 4. fis'' 4  |
                g'' 4. fis'' d'' 4  |
                e'' 2 ~ e'' 4 r  |
                d'' 8 d'' d'' d'' ~ d'' a' 4.  |
%% 15
                e'' 4 fis'' 8 e'' 4. r4  |
                d'' 8 d'' d'' d'' ~ d'' a' 4 d'' 8  |
                e'' 8 e'' fis'' e'' 4. r4  |
                d'' 8 d'' d'' d'' ~ d'' a' 4 d'' 8  |
                e'' 4 fis'' 8 e'' 4. fis'' 4  |
%% 20
                g'' 4. fis'' d'' 4  |
                e'' 1  |
                r2 fis'' 4 g''  |
                a'' 4 d'' 8 d'' 4 d'' d'' 8 ~  |
                d'' 2. e'' 8 fis''  |
%% 25
                g'' 4 a'' 8 g'' 4 fis'' fis'' 8 ~  |
                fis'' 8 e'' 4 r8 fis'' 4 g''  |
                a'' 4 d'' 8 d'' 4 d'' d'' 8 ~  |
                d'' 2. e'' 8 fis''  |
                g'' 4 a'' 8 g'' 4 fis'' fis'' 8 ~  |
%% 30
                fis'' 8 e'' 4. a'' 4 g''  |
                fis'' 4 fis'' 8 e'' 4 e'' d'' 8 ~  |
                d'' 2 fis'' 4 e''  |
                d'' 1  |
                r4 fis'' fis'' e''  |
%% 35
                d'' 1 ~  |
                d'' 4 r fis'' g''  |
                a'' 4 d'' 8 d'' 4 d'' d'' 8 ~  |
                d'' 2. e'' 8 fis''  |
                g'' 4 a'' 8 g'' 4 fis'' fis'' 8 ~  |
%% 40
                fis'' 8 e'' 4 r8 fis'' 4 g''  |
                a'' 4 d'' 8 d'' 4 d'' d'' 8 ~  |
                d'' 2. e'' 8 fis''  |
                g'' 4 a'' 8 g'' 4 fis'' fis'' 8 ~  |
                fis'' 8 e'' 4. a'' 4 g''  |
%% 45
                fis'' 4 fis'' 8 e'' 4 e'' d'' 8 ~  |
                d'' 2 fis'' 4 e''  |
                d'' 1  |
                r4 fis'' fis'' e''  |
                d'' 1  |
%% 50
                R1  |
                \bar "|."
	}
            } % Voice
            \lyricsto "voice 2" \new Lyrics \lyricmode {
                "És-" "te_es" "el" "dí-" "a" "y_el" "lu-" "gar,"
		"Dios" "es-" "tá_a-" "quí" "y" "te" "quie-" "re" "ha-" "blar."
		"A-" "bre" "las" "puer-" "tas" "y_es-" "-cú-" "cha-" "lo,"
		"y" "dé-" "ja-" "lo_en-" "-trar."
		%
		"És-" "te_es" "el" "dí-" "a" "y_el" "lu-" "gar,"
		"Dios" "es-" "tá_a-" "quí" "y" "te" "quie-" "re" "a-" "mar."
		"Da-" "le" "tu" "vi-" "da_y" "tu" "co-" "ra-" "zón,"
		"y_em-" "-pie-" "za_a-" "can-" "-tar."
		%
		"A-" "la-" "-ban-" "zas" "al" "Se-" "ñor," "por" "sus" "o-" "bras," "por" "sus" "do-" "-nes." 
		"A-" "la-" "-ban-" "zas" "al" "Se-" "ñor," "por" "la" "vi-" "da_y" "su" "pa-" "la-" "-bra." 
		"Y" "dar" "gra-" "cias" "al" "Se-" "ñor" "nues-" "tro" "Dios"
		"por" "su" "a-" "-mor."
		%
		"A-" "la-" "-ban-" "zas" "al" "Se-" "ñor," "por" "sus" "o-" "bras," "por" "sus" "do-" "-nes."
		"A-" "la-" "-ban-" "zas" "al" "Se-" "ñor," "por" "la" "vi-" "da_y" "su" "pa-" "la-" "-bra."
		"Y" "dar" "gra-" "cias" "al" "Se-" "ñor" "nues-" "tro" "Dios"
		"por" "su" "a-" "-mor."
             } % Lyrics
        >> % Staff
