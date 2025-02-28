<div class="problem-statement"><div class="header"><h1 class="title">L*. Войны клонов</h1><table><tbody><tr class="time-limit"><td class="property-title">Ограничение времени</td><td>0.2&nbsp;секунды</td></tr><tr class="memory-limit"><td class="property-title">Ограничение памяти</td><td>16Mb</td></tr><tr class="input-file"><td class="property-title">Ввод</td><td colspan="1">стандартный ввод или input.txt</td></tr><tr class="output-file"><td class="property-title">Вывод</td><td colspan="1">стандартный вывод или output.txt</td></tr></tbody></table></div><h2></h2><div class="legend"><p><em>Взрослых не могут утешить их отпрыски. Палпатин в плену. Гривус уйдет безнаказанным. Республика падет.</em></p> 
<p><em>Никакому человеку не остановить цунами. Никому даже не стоит пробовать. Даже Кеноби и Скайуокеру.</em></p> 
<p><em>И вот по всей Галактике взрослые смотрят Голографическую сеть, и у них болит там, где расположены их сердца.</em></p> 
<p><em>Потому что взрослые не видят радужной ряби пространства — от гиперпространственных прыжков. Потому что не видят, как два истребителя сбрасывают ускоряющие кольца и ныряют в самую гущу сражения.</em></p> 
<p><em>Два истребителя. Машины Ордена. Всего два.</em></p> 
<p><em>Двух достаточно.</em></p> 
<p><em>Двух достаточно, потому что взрослые все же ошибаются, а дети — правы.</em></p> 
<p><em>И хотя время героев заканчивается, но лучших оно приберегло напоследок.</em></p> 
<p>Энакин Скайуокер пытается найти свой 501-ый легион среди сотни других. На руках у него есть список с позывными клонов, служащих под его началом и списки с клонами из всех легионов на планете. Записи составлялись впопыхах, поэтому номера клонов в рамках одного списка могут повторяться. Напишите программу, которая поможет понять, совпадают ли записи, которые он изучает, с его списком.</p></div><h2>Формат ввода</h2><div class="input-specification"><p>Вводится число <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-1" class="mjx-math"><span id="MJXc-Node-2" class="mjx-mrow"><span id="MJXc-Node-3" class="mjx-semantics"><span id="MJXc-Node-4" class="mjx-mrow"><span id="MJXc-Node-5" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-1"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        N
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       N
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6833em;"></span><span class="mord mathnormal" style="margin-right:0.10903em;">N</span></span></span></span></span> <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-6" class="mjx-math"><span id="MJXc-Node-7" class="mjx-mrow"><span id="MJXc-Node-8" class="mjx-semantics"><span id="MJXc-Node-9" class="mjx-mrow"><span id="MJXc-Node-10" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.49em; padding-bottom: 0.612em;">(</span></span><span id="MJXc-Node-11" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">1</span></span><span id="MJXc-Node-12" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.49em;">≤</span></span><span id="MJXc-Node-13" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span><span id="MJXc-Node-14" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.49em;">≤</span></span><span id="MJXc-Node-15" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">100000</span></span><span id="MJXc-Node-16" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.49em; padding-bottom: 0.612em;">)</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-2"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mo stretchy="false">
        (
       </mo>
       <mn>
        1
       </mn>
       <mo>
        ≤
       </mo>
       <mi>
        N
       </mi>
       <mo>
        ≤
       </mo>
       <mn>
        100000
       </mn>
       <mo stretchy="false">
        )
       </mo>
      </mrow>
      <annotation encoding="application/x-tex">
       (1 \le N \le 100000)
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:1em;vertical-align:-0.25em;"></span><span class="mopen">(</span><span class="mord">1</span><span class="mspace" style="margin-right:0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right:0.2778em;"></span></span><span class="base"><span class="strut" style="height:0.8193em;vertical-align:-0.136em;"></span><span class="mord mathnormal" style="margin-right:0.10903em;">N</span><span class="mspace" style="margin-right:0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right:0.2778em;"></span></span><span class="base"><span class="strut" style="height:1em;vertical-align:-0.25em;"></span><span class="mord">100000</span><span class="mclose">)</span></span></span></span></span> — длина списка джедая. Во второй строке идет <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-17" class="mjx-math"><span id="MJXc-Node-18" class="mjx-mrow"><span id="MJXc-Node-19" class="mjx-semantics"><span id="MJXc-Node-20" class="mjx-mrow"><span id="MJXc-Node-21" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-3"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        N
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       N
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6833em;"></span><span class="mord mathnormal" style="margin-right:0.10903em;">N</span></span></span></span></span> целых чисел, не превосходящих по модулю <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-4-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-22" class="mjx-math"><span id="MJXc-Node-23" class="mjx-mrow"><span id="MJXc-Node-24" class="mjx-semantics"><span id="MJXc-Node-25" class="mjx-mrow"><span id="MJXc-Node-26" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">1</span></span><span id="MJXc-Node-27" class="mjx-msup"><span class="mjx-base"><span id="MJXc-Node-28" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">0</span></span></span><span class="mjx-sup" style="font-size: 70.7%; vertical-align: 0.591em; padding-left: 0px; padding-right: 0.071em;"><span id="MJXc-Node-29" class="mjx-mn" style=""><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">9</span></span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-4"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mn>
        1
       </mn>
       <msup>
        <mn>
         0
        </mn>
        <mn>
         9
        </mn>
       </msup>
      </mrow>
      <annotation encoding="application/x-tex">
       10^9
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.8141em;"></span><span class="mord">1</span><span class="mord"><span class="mord">0</span><span class="msupsub"><span class="vlist-t"><span class="vlist-r"><span class="vlist" style="height:0.8141em;"><span style="top:-3.063em;margin-right:0.05em;"><span class="pstrut" style="height:2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">9</span></span></span></span></span></span></span></span></span></span></span></span> — номера позывных клонов. Далее аналогично задается второй массив.</p></div><h2>Формат вывода</h2><div class="output-specification"><p>Программа должна вывести слово <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-5-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-30" class="mjx-math"><span id="MJXc-Node-31" class="mjx-mrow"><span id="MJXc-Node-32" class="mjx-semantics"><span id="MJXc-Node-33" class="mjx-mrow"><span id="MJXc-Node-34" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.182em;">Y</span></span><span id="MJXc-Node-35" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.429em; padding-bottom: 0.307em; padding-right: 0.026em;">E</span></span><span id="MJXc-Node-36" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.032em;">S</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-5"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        Y
       </mi>
       <mi>
        E
       </mi>
       <mi>
        S
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       YES
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6833em;"></span><span class="mord mathnormal" style="margin-right:0.22222em;">Y</span><span class="mord mathnormal" style="margin-right:0.05764em;">ES</span></span></span></span></span>, если множества уникальных элементов совпадают, и слово <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-6-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-37" class="mjx-math"><span id="MJXc-Node-38" class="mjx-mrow"><span id="MJXc-Node-39" class="mjx-semantics"><span id="MJXc-Node-40" class="mjx-mrow"><span id="MJXc-Node-41" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span><span id="MJXc-Node-42" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em;">O</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-6"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        N
       </mi>
       <mi>
        O
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       NO
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6833em;"></span><span class="mord mathnormal" style="margin-right:0.02778em;">NO</span></span></span></span></span> в противном случае.</p></div><h2>Пример</h2><table class="sample-tests"><thead><tr><th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy input"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy input"></span></button></div></th><th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy output"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy output"></span></button></div></th></tr></thead><tbody><tr><td><pre>3
1 7 9
4
9 7 7 1
</pre></td><td><pre>YES
</pre></td></tr></tbody></table></div>
