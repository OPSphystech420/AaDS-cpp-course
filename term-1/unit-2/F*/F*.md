<div class="problem-statement"><div class="header"><h1 class="title">F*. Сабакк</h1><table><tbody><tr class="time-limit"><td class="property-title">Ограничение времени</td><td>1&nbsp;секунда</td></tr><tr class="memory-limit"><td class="property-title">Ограничение памяти</td><td>256Mb</td></tr><tr class="input-file"><td class="property-title">Ввод</td><td colspan="1">стандартный ввод или input.txt</td></tr><tr class="output-file"><td class="property-title">Вывод</td><td colspan="1">стандартный вывод или output.txt</td></tr></tbody></table></div><h2></h2><div class="legend"><p><em>«Занятие, полностью лишённое смысла. Просто людям в нём везёт больше, чем прочим видам. Вероятно, таковы шутки эволюции» — Дрома.</em></p> 
<p>Азартная игра "Сабакк" крутится вокруг конструкции из трех стержней, пронумерованных числами 1, 2, 3. На стержень 1 надета пирамидка из n дисков различного диаметра в порядке возрастания диаметра. Диски можно перекладывать с одного стержня на другой по одному, при этом диск нельзя класть на диск меньшего диаметра. Суть игры в том, что вам необходимо переложить всю пирамидку со стержня 1 на стержень 3 за минимальное число перекладываний.</p> 
<p>Напишите программу, которая решает головоломку; для данного числа дисков n печатает последовательность перекладываний в формате <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-1" class="mjx-math"><span id="MJXc-Node-2" class="mjx-mrow"><span id="MJXc-Node-3" class="mjx-semantics"><span id="MJXc-Node-4" class="mjx-mrow"><span id="MJXc-Node-5" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">a</span></span><span id="MJXc-Node-6" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.18em; padding-bottom: 0.551em;">,</span></span><span id="MJXc-Node-7" class="mjx-mi MJXc-space1"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em;">b</span></span><span id="MJXc-Node-8" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.18em; padding-bottom: 0.551em;">,</span></span><span id="MJXc-Node-9" class="mjx-mi MJXc-space1"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">c</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-1"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        a
       </mi>
       <mo separator="true">
        ,
       </mo>
       <mi>
        b
       </mi>
       <mo separator="true">
        ,
       </mo>
       <mi>
        c
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       a, b, c
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.8889em;vertical-align:-0.1944em;"></span><span class="mord mathnormal">a</span><span class="mpunct">,</span><span class="mspace" style="margin-right:0.1667em;"></span><span class="mord mathnormal">b</span><span class="mpunct">,</span><span class="mspace" style="margin-right:0.1667em;"></span><span class="mord mathnormal">c</span></span></span></span></span>, где <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-10" class="mjx-math"><span id="MJXc-Node-11" class="mjx-mrow"><span id="MJXc-Node-12" class="mjx-semantics"><span id="MJXc-Node-13" class="mjx-mrow"><span id="MJXc-Node-14" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">a</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-2"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        a
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       a
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.4306em;"></span><span class="mord mathnormal">a</span></span></span></span></span> — номер перекладываемого диска, <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-15" class="mjx-math"><span id="MJXc-Node-16" class="mjx-mrow"><span id="MJXc-Node-17" class="mjx-semantics"><span id="MJXc-Node-18" class="mjx-mrow"><span id="MJXc-Node-19" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em;">b</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-3"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        b
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       b
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6944em;"></span><span class="mord mathnormal">b</span></span></span></span></span> — номер стержня с которого снимается данный диск, <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-4-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-20" class="mjx-math"><span id="MJXc-Node-21" class="mjx-mrow"><span id="MJXc-Node-22" class="mjx-semantics"><span id="MJXc-Node-23" class="mjx-mrow"><span id="MJXc-Node-24" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">c</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-4"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        c
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       c
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.4306em;"></span><span class="mord mathnormal">c</span></span></span></span></span> — номер стержня на который надевается данный диск.</p> 
<p>Например, строка 1 2 3 означает перемещение диска номер 1 со стержня 2 на стержень 3. В одной строке печатается одна команда. Диски пронумерованы числами от 1 до <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-5-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-25" class="mjx-math"><span id="MJXc-Node-26" class="mjx-mrow"><span id="MJXc-Node-27" class="mjx-semantics"><span id="MJXc-Node-28" class="mjx-mrow"><span id="MJXc-Node-29" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">n</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-5"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        n
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       n
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.4306em;"></span><span class="mord mathnormal">n</span></span></span></span></span> в порядке возрастания диаметров.</p></div><h2>Формат ввода</h2><div class="input-specification"><p>Вводится натуральное число <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-6-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-30" class="mjx-math"><span id="MJXc-Node-31" class="mjx-mrow"><span id="MJXc-Node-32" class="mjx-semantics"><span id="MJXc-Node-33" class="mjx-mrow"><span id="MJXc-Node-34" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">n</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-6"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        n
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       n
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.4306em;"></span><span class="mord mathnormal">n</span></span></span></span></span> (<span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-7-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-35" class="mjx-math"><span id="MJXc-Node-36" class="mjx-mrow"><span id="MJXc-Node-37" class="mjx-semantics"><span id="MJXc-Node-38" class="mjx-mrow"><span id="MJXc-Node-39" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">1</span></span><span id="MJXc-Node-40" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.49em;">≤</span></span><span id="MJXc-Node-41" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">n</span></span><span id="MJXc-Node-42" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.49em;">≤</span></span><span id="MJXc-Node-43" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">10</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-7"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mn>
        1
       </mn>
       <mo>
        ≤
       </mo>
       <mi>
        n
       </mi>
       <mo>
        ≤
       </mo>
       <mn>
        10
       </mn>
      </mrow>
      <annotation encoding="application/x-tex">
       1 \leq n \leq 10
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.7804em;vertical-align:-0.136em;"></span><span class="mord">1</span><span class="mspace" style="margin-right:0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right:0.2778em;"></span></span><span class="base"><span class="strut" style="height:0.7719em;vertical-align:-0.136em;"></span><span class="mord mathnormal">n</span><span class="mspace" style="margin-right:0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right:0.2778em;"></span></span><span class="base"><span class="strut" style="height:0.6444em;"></span><span class="mord">10</span></span></span></span></span>).</p></div><h2>Формат вывода</h2><div class="output-specification"><p>Программа должна вывести минимальный (по количеству произведенных операций) способ перекладывания пирамидки из данного числа дисков.</p></div><h2>Пример</h2><table class="sample-tests"><thead><tr><th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy input"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy input"></span></button></div></th><th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy output"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy output"></span></button></div></th></tr></thead><tbody><tr><td><pre>2
</pre></td><td><pre>1 1 2
2 1 3
1 2 3
</pre></td></tr></tbody></table></div>
