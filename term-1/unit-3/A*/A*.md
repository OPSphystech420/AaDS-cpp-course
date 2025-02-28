<div class="problem-statement"><div class="header"><h1 class="title">A*. Жизнь на Эндоре</h1><table><tbody><tr class="time-limit"><td class="property-title">Ограничение времени</td><td>1&nbsp;секунда</td></tr><tr class="memory-limit"><td class="property-title">Ограничение памяти</td><td>256Mb</td></tr><tr class="input-file"><td class="property-title">Ввод</td><td colspan="1">стандартный ввод или input.txt</td></tr><tr class="output-file"><td class="property-title">Вывод</td><td colspan="1">стандартный вывод или output.txt</td></tr></tbody></table></div><h2></h2><div class="legend"><p><em>- «В заключение один совет: не списывайте со счетов упомянутых вами аборигенов. Даже примитивное орудие может быть пущено в ход смертельно опасным способом».</em></p>
<p><em>- «Они не доставят нам неудобств. Они не любят чужаков. Всех чужаков».</em></p>
<p><em>Разговор старшего капитана Трауна и Императора Палпатина за четыре года до битвы.</em></p>
<p>Город на дереве имеет форму квадрата <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-1" class="mjx-math"><span id="MJXc-Node-2" class="mjx-mrow"><span id="MJXc-Node-3" class="mjx-semantics"><span id="MJXc-Node-4" class="mjx-mrow"><span id="MJXc-Node-5" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span><span id="MJXc-Node-6" class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.186em; padding-bottom: 0.307em;">×</span></span><span id="MJXc-Node-7" class="mjx-mi MJXc-space2"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-1"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        N
       </mi>
       <mo>
        ×
       </mo>
       <mi>
        N
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       N \times N
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.7667em;vertical-align:-0.0833em;"></span><span class="mord mathnormal" style="margin-right:0.10903em;">N</span><span class="mspace" style="margin-right:0.2222em;"></span><span class="mbin">×</span><span class="mspace" style="margin-right:0.2222em;"></span></span><span class="base"><span class="strut" style="height:0.6833em;"></span><span class="mord mathnormal" style="margin-right:0.10903em;">N</span></span></span></span></span>, в некоторых клетках которого живут эвоки (не более одного в любой клетке). Каждую секунду происходит следующее:</p>
<ul>
 <li>все эвоки, у которых менее 2-х соседей, уходят из города от скуки (соседями называются эвоки, живущие в клетках, имеющих общую сторону или вершину);</li>
 <li>все эвоки, у которых более 3-х соседей, уходят из города из-за перенаселенности;</li>
 <li>на всех пустых клетках, у которых ровно в трех соседних клетках жили эвоки, появляются новые эвоки. Все изменения происходят одновременно, то есть для каждой клетки сначала выясняется ее судьба, а затем происходят изменения сразу во всех клетках.</li>
</ul>
<p>Требуется по данной конфигурации определить, во что она превратится через <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-8" class="mjx-math"><span id="MJXc-Node-9" class="mjx-mrow"><span id="MJXc-Node-10" class="mjx-semantics"><span id="MJXc-Node-11" class="mjx-mrow"><span id="MJXc-Node-12" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.429em; padding-bottom: 0.307em; padding-right: 0.12em;">T</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-2"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        T
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       T
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6833em;"></span><span class="mord mathnormal" style="margin-right:0.13889em;">T</span></span></span></span></span> секунд.</p></div><h2>Формат ввода</h2><div class="input-specification"><p>В первой строке вводятся два натуральных числа -- <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-13" class="mjx-math"><span id="MJXc-Node-14" class="mjx-mrow"><span id="MJXc-Node-15" class="mjx-semantics"><span id="MJXc-Node-16" class="mjx-mrow"><span id="MJXc-Node-17" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-3"><math xmlns="http://www.w3.org/1998/Math/MathML">
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
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6833em;"></span><span class="mord mathnormal" style="margin-right:0.10903em;">N</span></span></span></span></span> (1 ≤ <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-4-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-18" class="mjx-math"><span id="MJXc-Node-19" class="mjx-mrow"><span id="MJXc-Node-20" class="mjx-semantics"><span id="MJXc-Node-21" class="mjx-mrow"><span id="MJXc-Node-22" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-4"><math xmlns="http://www.w3.org/1998/Math/MathML">
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
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6833em;"></span><span class="mord mathnormal" style="margin-right:0.10903em;">N</span></span></span></span></span> ≤ 10) и <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-5-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-23" class="mjx-math"><span id="MJXc-Node-24" class="mjx-mrow"><span id="MJXc-Node-25" class="mjx-semantics"><span id="MJXc-Node-26" class="mjx-mrow"><span id="MJXc-Node-27" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.429em; padding-bottom: 0.307em; padding-right: 0.12em;">T</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-5"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        T
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       T
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6833em;"></span><span class="mord mathnormal" style="margin-right:0.13889em;">T</span></span></span></span></span> (1 ≤ <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-6-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-28" class="mjx-math"><span id="MJXc-Node-29" class="mjx-mrow"><span id="MJXc-Node-30" class="mjx-semantics"><span id="MJXc-Node-31" class="mjx-mrow"><span id="MJXc-Node-32" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.429em; padding-bottom: 0.307em; padding-right: 0.12em;">T</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-6"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        T
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       T
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6833em;"></span><span class="mord mathnormal" style="margin-right:0.13889em;">T</span></span></span></span></span> ≤ 100). Далее записано <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-7-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-33" class="mjx-math"><span id="MJXc-Node-34" class="mjx-mrow"><span id="MJXc-Node-35" class="mjx-semantics"><span id="MJXc-Node-36" class="mjx-mrow"><span id="MJXc-Node-37" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-7"><math xmlns="http://www.w3.org/1998/Math/MathML">
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
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6833em;"></span><span class="mord mathnormal" style="margin-right:0.10903em;">N</span></span></span></span></span> строчек по <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-8-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-38" class="mjx-math"><span id="MJXc-Node-39" class="mjx-mrow"><span id="MJXc-Node-40" class="mjx-semantics"><span id="MJXc-Node-41" class="mjx-mrow"><span id="MJXc-Node-42" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-8"><math xmlns="http://www.w3.org/1998/Math/MathML">
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
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6833em;"></span><span class="mord mathnormal" style="margin-right:0.10903em;">N</span></span></span></span></span> чисел, описывающих начальную конфигурацию (0 -- пустая клетка, 1 -- эвок). Числа в строках разделены пробелами.</p></div><h2>Формат вывода</h2><div class="output-specification"><p>Требуется вывести <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-9-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-43" class="mjx-math"><span id="MJXc-Node-44" class="mjx-mrow"><span id="MJXc-Node-45" class="mjx-semantics"><span id="MJXc-Node-46" class="mjx-mrow"><span id="MJXc-Node-47" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-9"><math xmlns="http://www.w3.org/1998/Math/MathML">
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
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6833em;"></span><span class="mord mathnormal" style="margin-right:0.10903em;">N</span></span></span></span></span> строк по <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-10-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-48" class="mjx-math"><span id="MJXc-Node-49" class="mjx-mrow"><span id="MJXc-Node-50" class="mjx-semantics"><span id="MJXc-Node-51" class="mjx-mrow"><span id="MJXc-Node-52" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-10"><math xmlns="http://www.w3.org/1998/Math/MathML">
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
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6833em;"></span><span class="mord mathnormal" style="margin-right:0.10903em;">N</span></span></span></span></span> чисел -- описание конфигурации через <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-11-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-53" class="mjx-math"><span id="MJXc-Node-54" class="mjx-mrow"><span id="MJXc-Node-55" class="mjx-semantics"><span id="MJXc-Node-56" class="mjx-mrow"><span id="MJXc-Node-57" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.429em; padding-bottom: 0.307em; padding-right: 0.12em;">T</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-11"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        T
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       T
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6833em;"></span><span class="mord mathnormal" style="margin-right:0.13889em;">T</span></span></span></span></span> секунд (в том же формате, как и во входных данных).</p></div><h2>Пример</h2><table class="sample-tests"><thead><tr><th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy input"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy input"></span></button></div></th><th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy output"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy output"></span></button></div></th></tr></thead><tbody><tr><td><pre>3 1
1 0 1
1 0 1
1 0 1
</pre></td><td><pre>0 0 0
1 0 1
0 0 0
</pre></td></tr></tbody></table></div>

