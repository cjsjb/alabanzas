\version "2.10.0"
#(ly:set-option 'point-and-click #f)
\header {
    title = "Alabanzas al Señor"
    composer = "Eduardo Ortiz Tirado Kelly"
    tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
    \time 4/4
}
globalTempo = {
    \tempo 4 = 140
}
\score {
    <<
        % force offset of colliding notes in chords:
        \override Score.NoteColumn #'force-hshift = #1.0

	\include "alabanzas-acordes.inc"
        \new StaffGroup <<
		\include "alabanzas-soprano.inc"
		\include "alabanzas-mezzo.inc"
		\include "alabanzas-tenor.inc"
	>>
	\include "alabanzas-violin.inc"
	%\include "alabanzas-ritmo.inc"

    >>

    \layout { \context { \RemoveEmptyStaffContext } }
}
