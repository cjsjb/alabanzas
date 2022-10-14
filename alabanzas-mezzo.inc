\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\key d \major
		\clef "treble"
		R1*5  |
		d' 8 d' d' d' ~ d' a 4.  |
		e' 4 fis' 8 e' 4. r4  |
		g' 8 g' g' g' ~ g' 4 fis' 8 e'  |
		fis' 8 e' d' e' 4. r4  |
%% 10
		d' 8 d' d' d' ~ d' a 4 d' 8  |
		e' 4 fis' 8 e' 4 r8 fis' 4  |
		g' 4. fis' d' 4  |
		cis' 2 ~ cis' 4 r  |
		d' 8 d' d' d' ~ d' a 4.  |
%% 15
		e' 4 fis' 8 e' 4. r4  |
		g' 8 g' g' g' ~ g' 4 fis' 8 e'  |
		fis' 8 e' d' e' 4. r4  |
		d' 8 d' d' d' ~ d' a 4 d' 8  |
		e' 4 fis' 8 e' 4 r8 fis' 4  |
%% 20
		g' 4. fis' g' 4  |
		a' 1 ~  |
		a' 4 r fis' e'  |
		d' 4 d' 8 d' 4 cis' b 8 ~  |
		b 2 r4 b 8 b  |
%% 25
		b 4 b 8 b 4 d' d' 8 ~  |
		d' 8 cis' r4 fis' e'  |
		d' 4 d' 8 d' 4 cis' b 8 ~  |
		b 2 r4 b 8 b  |
		b 4 b 8 b 4 d' d' 8 ~  |
%% 30
		d' 8 cis' r4 e' d'  |
		cis' 4 cis' 8 b 4 cis' d' 8 ~  |
		d' 4 r b cis'  |
		d' 1  |
		r4 d' d' cis'  |
%% 35
		a 1 ~  |
		a 4 r fis' e'  |
		d' 4 d' 8 d' 4 cis' b 8 ~  |
		b 2 r4 b 8 b  |
		b 4 b 8 b 4 d' d' 8 ~  |
%% 40
		d' 8 cis' r4 fis' e'  |
		d' 4 d' 8 d' 4 cis' b 8 ~  |
		b 2 r4 b 8 b  |
		b 4 b 8 b 4 d' d' 8 ~  |
		d' 8 cis' r4 e' d'  |
%% 45
		cis' 4 cis' 8 b 4 cis' d' 8 ~  |
		d' 4 r b cis'  |
		d' 1  |
		r4 d' d' cis'  |
		a 1  |
%% 50
		R1  |
		\bar "|."
	} % Voice
	\new Lyrics \lyricsto "voz-mezzo" {
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
		"A" -- "la" -- "ban" -- "zas" "al" "Se" -- "ñor," __ "por" "sus" "o" -- "bras," "por" "sus" "do" -- "nes."
		"A" -- "la" -- "ban" -- "zas" "al" "Se" -- "ñor," __ "por" "la" "vi" -- "da y" "su" "pa" -- "la" -- "bra."
		"Y" "dar" "gra" -- "cias" "al" "Se" -- "ñor" __ "nues" -- "tro" "Dios"
		"por" "su" "a" -- "mor." __
		%
		"A" -- "la" -- "ban" -- "zas" "al" "Se" -- "ñor," __ "por" "sus" "o" -- "bras," "por" "sus" "do" -- "nes."
		"A" -- "la" -- "ban" -- "zas" "al" "Se" -- "ñor," __ "por" "la" "vi" -- "da y" "su" "pa" -- "la" -- "bra."
		"Y" "dar" "gra" -- "cias" "al" "Se" -- "ñor" __ "nues" -- "tro" "Dios"
		"por" "su" "a" -- "mor."
	 } % Lyrics
>> % Staff
