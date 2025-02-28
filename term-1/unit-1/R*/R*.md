<div class="problem-statement"><div class="header"><h1 class="title">R*. k-я порядковая статистика. Шаблоны</h1><table><tbody><tr class="time-limit"><td class="property-title">Ограничение времени</td><td>1&nbsp;секунда</td></tr><tr class="memory-limit"><td class="property-title">Ограничение памяти</td><td>256Mb</td></tr><tr class="input-file"><td class="property-title">Ввод</td><td colspan="1">стандартный ввод или input.txt</td></tr><tr class="output-file"><td class="property-title">Вывод</td><td colspan="1">стандартный вывод или output.txt</td></tr></tbody></table></div><h2></h2><div class="legend"><p>Реализуйте шаблонную функцию <em>KthElement</em>, которая упорядочивает элементы последовательности так, чтобы на <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-1" class="mjx-math"><span id="MJXc-Node-2" class="mjx-mrow"><span id="MJXc-Node-3" class="mjx-semantics"><span id="MJXc-Node-4" class="mjx-mrow"><span id="MJXc-Node-5" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em;">k</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-1"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        k
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       k
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6944em;"></span><span class="mord mathnormal" style="margin-right:0.03148em;">k</span></span></span></span></span>-м месте (в 0 индексации) стоял <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-6" class="mjx-math"><span id="MJXc-Node-7" class="mjx-mrow"><span id="MJXc-Node-8" class="mjx-semantics"><span id="MJXc-Node-9" class="mjx-mrow"><span id="MJXc-Node-10" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em;">k</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-2"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        k
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       k
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6944em;"></span><span class="mord mathnormal" style="margin-right:0.03148em;">k</span></span></span></span></span>-й по величине элемент последовательности.</p> 
<p>Функция должна принимать 3 аргумента: <em>begin</em> - указатель на начало последовательности; <em>kth</em> - указатель на <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-11" class="mjx-math"><span id="MJXc-Node-12" class="mjx-mrow"><span id="MJXc-Node-13" class="mjx-semantics"><span id="MJXc-Node-14" class="mjx-mrow"><span id="MJXc-Node-15" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em;">k</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-3"><math xmlns="http://www.w3.org/1998/Math/MathML">
     <semantics>
      <mrow>
       <mi>
        k
       </mi>
      </mrow>
      <annotation encoding="application/x-tex">
       k
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6944em;"></span><span class="mord mathnormal" style="margin-right:0.03148em;">k</span></span></span></span></span>-ю позицию; <em>end</em> - указатель на конец последовательности.</p> 
<p><code>Среднее время работы алгоритма должно быть линейным от длины полуинтервала *[begin, end)*</code>.</p> 
<p><strong>Пример:</strong></p> 
<p><em>int array[5]{2, 3, 5, 4, 1}</em></p> 
<p><em>KthElement(array, array + 2, array + 5);</em> // array = {1, 2, 3, 5, 4}</p></div><h2>Примечания</h2><div class="notes"><p>Ваш код будет проверяться на скрытых от вас юнит-тестах, проверяющих корректность шаблонной реализации. Требование к реализации: из операций сравнения можно использовать только операцию "&lt;".</p> 
<p>Пришлите на проверку заголовочный файл, содержащий ТОЛЬКО определение шаблона. Он будет включен в cpp файл с тестами автоматически (main писать не нужно!).</p></div></div>
