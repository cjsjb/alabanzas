% This LilyPond file was generated by Rosegarden 1.5.1
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Alabanzas al Señor"
	tagline = "Coro Juvenil San Juan Bosco"
	instrument = "Soprano"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
global = {
	\time 4/4
	\skip 1*50  %% 1-50
}
globalTempo = {
	\tempo 4 = 150  \skip 1*50
}
\score {
	\new StaffGroup <<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "alabanzas2-acordes.inc"
		\include "alabanzas2-soprano.inc"

	>> % notes

	\layout { }
} % score
