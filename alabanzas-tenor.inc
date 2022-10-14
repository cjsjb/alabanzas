\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\key d \major
		\clef "treble_8"
		R1*5  |
		d 8 d d d ~ d a, 4.  |
		e 4 fis 8 e 4. r4  |
		d 8 d d d ~ d 4 a, 8 d  |
		e 8 e fis e 4. r4  |
%% 10
		d 8 d d d ~ d a, 4 d 8  |
		e 4 fis 8 e 4 r8 fis 4  |
		g 4. fis d 4  |
		e 2 ~ e 4 r  |
		d 8 d d d ~ d a, 4.  |
%% 15
		e 4 fis 8 e 4. r4  |
		d 8 d d d ~ d 4 a, 8 d  |
		e 8 e fis e 4. r4  |
		d 8 d d d ~ d a, 4 d 8  |
		e 4 fis 8 e 4 r8 fis 4  |
%% 20
		g 4. fis d 4  |
		e 1 ~  |
		e 4 r fis g  |
		a 1  |
		a 1  |
%% 25
		g 2. b 8 b ~  |
		b 8 a r4 fis g  |
		a 1  |
		a 1  |
		g 2. b 8 b ~  |
%% 30
		b 8 a r4 fis g  |
		a 4 a 8 b 4 cis' d' 8 ~  |
		d' 4 r fis e  |
		d 1  |
		r4 fis fis e  |
%% 35
		d 1 ~  |
		d 4 r fis g  |
		a 1  |
		a 1  |
		g 2. b 8 b ~  |
%% 40
		b 8 a r4 fis g  |
		a 1  |
		a 1  |
		g 2. b 8 b ~  |
		b 8 a r4 fis g  |
%% 45
		a 4 a 8 b 4 cis' d' 8 ~  |
		d' 4 r fis e  |
		d 1  |
		r4 fis fis e  |
		d 1  |
%% 50
		R1  |
		\bar "|."
	} % Voice
	\new Lyrics \lyricsto "voz-tenor" {
		"És" -- "te es" "el" "dí" -- "a" "y el" "lu" -- "gar,"
		"Dios" "es" -- "tá a" -- "quí" "y" "te" "quie" -- "re" "ha" -- "blar."
		"A" -- "bre" "las" "puer" -- "tas" "y es" -- "cú" -- "cha" -- "lo,"
		"y" "dé" -- "ja" -- "lo en" -- "trar." __
		%
		"És" -- "te es" "el" "dí" -- "a" "y el" "lu" -- "gar,"
		"Dios" "es" -- "tá a" -- "quí" "y" "te" "quie" -- "re" "a" -- "mar."
		"Da" -- "le" "tu" "vi" -- "da y" "tu" "co" -- "ra" -- "zón,"
		"y em" -- "pie" -- "za a" -- "can" -- "tar." __
		%
		"A" -- "la" -- "ban" -- "zas," "a" -- "la" -- "ban" -- "zas."
		"A" -- "la" -- "ban" -- "zas," "a" -- "la" -- "ban" -- "zas."
		"Y" "dar" "gra" -- "cias" "al" "Se" -- "ñor" __ "nues" -- "tro" "Dios"
		"por" "su" "a" -- "mor." __
		%
		"A" -- "la" -- "ban" -- "zas," "a" -- "la" -- "ban" -- "zas."
		"A" -- "la" -- "ban" -- "zas," "a" -- "la" -- "ban" -- "zas."
		"Y" "dar" "gra" -- "cias" "al" "Se" -- "ñor" __ "nues" -- "tro" "Dios"
		"por" "su" "a" -- "mor."
	 } % Lyrics
>> % Staff
