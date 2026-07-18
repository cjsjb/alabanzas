\context ChordNames \chords {
	$(if (>= (cadr (ly:version)) 24)
		#{ \set Score.rehearsalMarkFormatter = #format-mark-box-numbers #}
		#{ \set Score.markFormatter = #format-mark-box-numbers #})

	% intro
	\mark \default
	\skip 1*1
	\skip 1*4

	% Este es el dia y el lugar...
	\mark \default
	\skip 1*4
	\skip 1*5
	\skip 1*4
	\skip 1*4

	% Alabanzas al Sennor...
	\mark \default
	\skip 1*4
	\skip 1*4
	\skip 1*4
	\skip 1*2

	% Alabanzas al Sennor...
	\mark \default
	\skip 1*4
	\skip 1*4
	\skip 1*4
	%\skip 1*2
}
