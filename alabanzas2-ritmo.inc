        \context RhythmicStaff = "Ritmo" << 
            \set Staff.instrumentName = "Guitarra"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 5" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \skip 1
		\key d \major
                d' 4 d' 8 d' 4 d' 8 d' d'  |
                a 4 a 8 a 4 a 8 a a  |
                g 4 g 8 g 4 g 8 g g  |
%% 5
                a 4 a 8 a 4 a 8 a a  |
                d' 4 d' 8 d' 4 d' 8 d' d'  |
                a 4 a 8 a 4 a 8 a a  |
                g 4 g 8 g 4 g 8 g g  |
                a 4 a 8 a 4 a 8 a a  |
%% 10
                d' 4 d' 8 d' 4 d' 8 d' d'  |
                a 4 a 8 a 4 a 8 a a  |
                g 4 g 8 g 4 g 8 g g  |
                a 4 a 8 a 4 a 8 a a  |
                d' 4 d' 8 d' 4 d' 8 d' d'  |
%% 15
                a 4 a 8 a 4 a 8 a a  |
                g 4 g 8 g 4 g 8 g g  |
                a 4 a 8 a 4 a 8 a a  |
                d' 4 d' 8 d' 4 d' 8 d' d'  |
                a 4 a 8 a 4 a 8 a a  |
%% 20
                g 4 g 8 g 4 g 8 g g  |
                a 4 a 8 a 4 a 8 a a  |
                a 4 a 8 a 4 a 8 a a  |
                d' 4 d' 8 d' 4 d' 8 d' d'  |
                b 4 b 8 b 4 b 8 b b  |
%% 25
                g 4 g 8 g 4 g 8 g g  |
                a 4 a 8 a 4 a 8 a a  |
                d' 4 d' 8 d' 4 d' 8 d' d'  |
                b 4 b 8 b 4 b 8 b b  |
                g 4 g 8 g 4 g 8 g g  |
%% 30
                a 4 a 8 a a 4 g  |
                fis 4 fis 8 fis 4 fis 8 fis fis  |
                b 4 b 8 b 4 b 8 b b  |
                g 4 g 8 g 4 g 8 g g  |
                a 4 a 4 r 2  |
%% 35
                d' 4 d' 8 d' 4 d' 8 d' d'  |
                a 8 a a a 4 a 8 a a  |
                d' 4 d' 8 d' 4 d' 8 d' d'  |
                b 4 b 8 b 4 b 8 b b  |
                g 4 g 8 g 4 g 8 g g  |
%% 40
                a 4 a 8 a 4 a 8 a a  |
                d' 4 d' 8 d' 4 d' 8 d' d'  |
                b 4 b 8 b 4 b 8 b b  |
                g 4 g 8 g 4 g 8 g g  |
                a 4 a 8 a a 4 g  |
%% 45
                fis 4 fis 8 fis 4 fis 8 fis fis  |
                b 4 b 8 b 4 b 8 b b  |
                g 4 g 8 g 4 g 8 g g  |
                a 4 a 4 r 2 |
                d' 4 d' 8 d' 4 d' 8 d' d' 16 d'  |
%% 50
                d' 1  |
                \bar "|."
            } % Voice
        >> % Staff
