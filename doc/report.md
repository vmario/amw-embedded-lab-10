---
title: "Ćwiczenie 10: Zawody _Capture the flag_ (CTF)"
author: [Mariusz Chilmon <<mariusz.chilmon@ctm.gdynia.pl>>]
lang: "pl"
titlepage: no
colorlinks: yes
header-right: "\\faEdit"
footer-left: "Sprawozdanie z laboratorium"
header-includes: |
  \usepackage{awesomebox}
  \usepackage{tikz}
  \usetikzlibrary{positioning}
  \usepackage[raster]{tcolorbox}
...

_W trosce o Państwa wyniki proszę o czytelne wpisywanie nazwisk._

**Data**: \dotfill

**Autorzy**: \dotfill

# Część praktyczna

## Zadanie podstawowe

**Ocena prowadzącego**: \dotfill

## Zadanie rozszerzone

**Ocena prowadzącego**: \dotfill

# Część teoretyczna

## Zadanie podstawowe

### Obliczenie kodu poszukiwanej instrukcji

\begin{description}
\item[O]
\textit{Opcode}, czyli kod instrukcji.
\item[A]
Adres rejestru.
\item[b]
Numer bitu.
\end{description}

\tcbset{size=small, colback=white, halign=center, valign=bottom}
\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=16, colframe=white]
    \tcbitem 15
    \tcbitem 14
    \tcbitem 13
    \tcbitem 12
    \tcbitem 11
    \tcbitem 10
    \tcbitem 9
    \tcbitem 8
    \tcbitem 7
    \tcbitem 6
    \tcbitem 5
    \tcbitem 4
    \tcbitem 3
    \tcbitem 2
    \tcbitem 1
    \tcbitem 0
\end{tcbitemize}
\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=16]
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem A
    \tcbitem A
    \tcbitem A
    \tcbitem A
    \tcbitem A
    \tcbitem b
    \tcbitem b
    \tcbitem b
\end{tcbitemize}

Każdą czwórkę bitów zamień na cyfrę szesnastkową:

\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=4]
    \tcbitem \vphantom{W}
    \tcbitem
    \tcbitem
    \tcbitem
\end{tcbitemize}

Każdą parę cyfr połącz w bajt.

\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=2]
    \tcbitem \vphantom{W}
    \tcbitem
\end{tcbitemize}

Mamy do czynienia z mikroprocesorem o architekturze _little endian_, co oznacza, że w pamięci najpierw zapisywany jest mniej znaczący bajt. Musisz więc zamienić bajty miejscami:

\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=2]
    \tcbitem \vphantom{W}
    \tcbitem
\end{tcbitemize}

Odnajdź w skompilowanym wsadzie obliczoną powyżej wartość.

### Obliczenie kodu nowej instrukcji

Teraz zmodyfikuj instrukcję tak, by odnosiła się do pinu XXXXX:

\tcbset{size=small, colback=white, halign=center, valign=bottom}
\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=16, colframe=white]
    \tcbitem 15
    \tcbitem 14
    \tcbitem 13
    \tcbitem 12
    \tcbitem 11
    \tcbitem 10
    \tcbitem 9
    \tcbitem 8
    \tcbitem 7
    \tcbitem 6
    \tcbitem 5
    \tcbitem 4
    \tcbitem 3
    \tcbitem 2
    \tcbitem 1
    \tcbitem 0
\end{tcbitemize}
\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=16]
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem A
    \tcbitem A
    \tcbitem A
    \tcbitem A
    \tcbitem A
    \tcbitem b
    \tcbitem b
    \tcbitem b
\end{tcbitemize}
\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=4]
    \tcbitem \vphantom{W}
    \tcbitem
    \tcbitem
    \tcbitem
\end{tcbitemize}
\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=2]
    \tcbitem \vphantom{W}
    \tcbitem
\end{tcbitemize}
\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=2]
    \tcbitem \vphantom{W}
    \tcbitem
\end{tcbitemize}

Zamień odnalezioną wartość na obliczoną powyżej.

## Zadanie rozszerzone

## \faCertificate&nbsp; Bonus

_+1 pkt dla drużyny, która jako pierwsza wyświetli poszukiwaną flagę._
