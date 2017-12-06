TARGET=main

SOURCES := $(wildcard *.tex) literature.bib $(wildcard experiments/*.tex) $(wildcard ticks/*.tex) $(wildcard experiments/*.txt)

LATEXMK=./latexmk -pdf

all:$(TARGET).pdf

$(TARGET).pdf: $(SOURCES)
	@pdflatex -interaction=batchmode ${TARGET}.tex

verbose: $(SOURCES)
	$(LATEXMK) ${TARGET}.tex

final: $(SOURCES)
	@$(LATEXMK) --silent $(TARGET).tex


error:
	pdflatex -file-line-error -halt-on-error $(TARGET).tex

clean: cleantilde cleanpics
	rm -f *.log *.aux *.aux.bak *.nav *.out *.snm *.dvi *.toc *.blg
	rm -f *.ttt *.fff *.lot *.lof 

cleantilde:
	@find . -type f -iname '*~' -exec  rm {} \;

cleanall:clean
	rm -f $(TARGET).pdf $(TARGET).bbl

echo:
	@echo $(SOURCES)

open:final
	@open $(TARGET).pdf

pictures:
	pdflatex --jobname=szymanski-diagram $(TARGET).tex
	pdflatex --jobname=projection-funnel $(TARGET).tex

cleanpics:
	rm -f szymanski-diagram.aux szymanski-diagram.log szymanski-diagram.pdf
	rm -f projection-funnel.aux projection-funnel.log projection-funnel.pdf
