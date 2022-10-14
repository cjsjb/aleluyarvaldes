\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key e \minor

		% intro
		R1  |
		e' 8 e' e' 4 fis' 8 fis' fis' 4  |
		g' 8 fis' e' fis' 4. e' 8 fis'  |
		g' 8 e' r4 r2  |
%% 5
		R1  |
		e' 8 e' e' 4 fis' 8 fis' fis' 4  |
		g' 8 fis' e' fis' 4. e' 8 fis'  |
		g' 8 e' r4 r2  |
		r4 g' 8 g' g' 4 g'  |
%% 10
		r4 a' 8 a' a' 4 a'  |
		r4 c'' 8 c'' c'' 2  |
		b' 2. r4  |
		e' 8 fis' g' e' r2  |
		e' 8 fis' g' e' r2  |
%% 15
		e' 8 fis' g' e' r2  |
		R1  |
		\bar "|."
	} % Voice

	\new Lyrics \lyricsto "voz-soprano" {
		% primera parte
		A -- le -- lu -- "ya, a" -- le -- lu -- "ya, a" -- le -- lu -- ya, a -- le -- lu -- ya.
		A -- le -- lu -- "ya, a" -- le -- lu -- "ya, a" -- le -- lu -- ya, a -- le -- lu -- ya.

		% segunda parte
		A -- le -- lu -- ya,
		a -- le -- lu -- ya,
		a -- le -- lu -- ya.

		% finale
		A -- le -- lu -- ya.
		A -- le -- lu -- ya.
		A -- le -- lu -- ya.

	} % Lyrics 1
>> % Staff ends
