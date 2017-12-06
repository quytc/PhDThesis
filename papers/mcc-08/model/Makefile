TARGET=main

SOURCES := $(wildcard *.tex)

all:${TARGET}.pdf

${TARGET}.pdf: ${SOURCES}
	latexmk -pdf ${TARGET}.tex

silent: ${SOURCES}
	latexmk -pdf --silent ${TARGET}.tex

clean: cleantilde
	rm -f *.log *.aux *.aux.bak *.nav *.out *.snm *.dvi *.toc *.blg *.bbl

cleantilde:
	-@rm -f $(wildcard *~)

cleanall:clean
	rm -f ${TARGET}.pdf

echo:
	@echo ${SOURCES}
