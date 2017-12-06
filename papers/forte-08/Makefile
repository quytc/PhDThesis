TARGET=main

SOURCES=$(shell ls *.tex)
TILDE=$(shell ls *~)

all:${TARGET}.pdf

echo:
	@echo ${SOURCES}
	@echo ${TILDE}

${TARGET}.dvi: ${SOURCES}
	latexmk ${TARGET}.tex

${TARGET}.ps:${TARGET}.dvi ${SOURCES}
	dvips ${TARGET}.dvi -o

${TARGET}.pdf:${TARGET}.ps ${SOURCES}
	ps2pdf ${TARGET}.ps

clean: cleantilde
	rm -f *.log *.aux *.aux.bak *.nav *.out *.snm *.dvi *.toc *.blg *.bbl

cleantilde:
	-@rm -f ${TILDE}

cleanall:clean
	rm -f ${TARGET}.ps ${TARGET}.pdf
