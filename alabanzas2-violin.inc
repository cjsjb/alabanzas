        \context Staff = "Violín" << 
            \set Staff.instrumentName = "Violín"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 4" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

		\key d \major
                r2 fis'' 4 g''  |
                a'' 1  |
                e'' 2. e'' 8 fis''  |
                g'' 2. r8 fis'' ~  |
%% 5
                fis'' 8 e'' 2. r8  |
                R1*8  |
                a' 1 ~  |
%% 15
                a' 1  |
                g' 2. fis' 4  |
                e' 1  |
                a' 1 ~  |
                a' 2. r4  |
%% 20
                g' 2 d' 16 e' fis' g' a' b' cis'' d''  |
                e'' 1 ~  |
                e'' 4 r fis'' g''  |
                a'' 1  |
                d'' 2. e'' 8 fis''  |
%% 25
                g'' 2. r8 fis'' ~  |
                fis'' 8 e'' 4. fis'' 4 g''  |
                a'' 1  |
                d'' 2. e'' 8 fis''  |
                g'' 2. r8 fis'' ~  |
%% 30
                fis'' 8 e'' 4. e'' 4 d''  |
                cis'' 4 cis'' 8 \stemDown b' 4 \stemNeutral cis'' d'' 8 ~  |
                d'' 2 \stemDown b' 4 \stemNeutral cis''  |
                d'' 1  |
                r4 fis'' fis'' e''  |
%% 35
                d'' 1 ~  |
                d'' 4 r fis'' g''  |
                a'' 1  |
                d'' 2. e'' 8 fis''  |
                g'' 2. r8 fis'' ~  |
%% 40
                fis'' 8 e'' 4. fis'' 4 g''  |
                a'' 1  |
                d'' 2. e'' 8 fis''  |
                g'' 2. r8 fis'' ~  |
                fis'' 8 e'' 4. e'' 4 d''  |
%% 45
                cis'' 4 cis'' 8 \stemDown b' 4 \stemNeutral cis'' d'' 8 ~  |
                d'' 2 \stemDown b' 4 \stemNeutral cis''  |
                d'' 1  |
                r4 fis'' fis'' e''  |
                d'' 1  |
%% 50
                R1  |
                \bar "|."
            } % Voice
        >> % Staff
