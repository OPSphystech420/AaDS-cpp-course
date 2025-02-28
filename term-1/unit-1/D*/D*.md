<div class="problem-statement"><div class="header"><h1 class="title">D*. Фишки</h1><table><tbody><tr class="time-limit"><td class="property-title">Ограничение времени</td><td>1&nbsp;секунда</td></tr><tr class="memory-limit"><td class="property-title">Ограничение памяти</td><td>256Mb</td></tr><tr class="input-file"><td class="property-title">Ввод</td><td colspan="1">стандартный ввод или input.txt</td></tr><tr class="output-file"><td class="property-title">Вывод</td><td colspan="1">стандартный вывод или output.txt</td></tr></tbody></table></div><h2></h2><div class="legend"><p>Дана полоска из клеток, пронумерованных от 1 до <span class="math inline"><span class="katex"><span class="katex-mathml">
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
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6833em;"></span><span class="mord mathnormal" style="margin-right:0.10903em;">N</span></span></span></span></span>. На каждом ходу разрешено поставить фишку на клетку (если её там еще нет) или снять фишку с клетки (если она там есть). При любом действии (постановка фишки или снятие фишки), можно выбрать не любую клетку, а только клетку под номером 1 или клетку, следующую за самой первой фишкой. Изначально полоска пуста. Требуется занять все клетки. Как только все клетки заполнены - действия прекращаются.</p></div><h2>Формат ввода</h2><div class="input-specification"><p>С клавиатуры вводится натуральное число <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-6" class="mjx-math"><span id="MJXc-Node-7" class="mjx-mrow"><span id="MJXc-Node-8" class="mjx-semantics"><span id="MJXc-Node-9" class="mjx-mrow"><span id="MJXc-Node-10" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-2"><math xmlns="http://www.w3.org/1998/Math/MathML">
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
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-11" class="mjx-math"><span id="MJXc-Node-12" class="mjx-mrow"><span id="MJXc-Node-13" class="mjx-semantics"><span id="MJXc-Node-14" class="mjx-mrow"><span id="MJXc-Node-15" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-3"><math xmlns="http://www.w3.org/1998/Math/MathML">
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
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.6833em;"></span><span class="mord mathnormal" style="margin-right:0.10903em;">N</span></span></span></span></span> ≤ 10).</p></div><h2>Формат вывода</h2><div class="output-specification"><p>Требуется вывести последовательность номеров клеток, с которыми совершается действие в строку через пробел. Если фишка снимается, то номер клетки должен выводиться со знаком минус. Количество действий не должно превышать <span class="math inline"><span class="katex"><span class="katex-mathml">
    <span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-4-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-16" class="mjx-math"><span id="MJXc-Node-17" class="mjx-mrow"><span id="MJXc-Node-18" class="mjx-semantics"><span id="MJXc-Node-19" class="mjx-mrow"><span id="MJXc-Node-20" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">1</span></span><span id="MJXc-Node-21" class="mjx-msup"><span class="mjx-base"><span id="MJXc-Node-22" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">0</span></span></span><span class="mjx-sup" style="font-size: 70.7%; vertical-align: 0.591em; padding-left: 0px; padding-right: 0.071em;"><span id="MJXc-Node-23" class="mjx-mn" style=""><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">4</span></span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-4"><math xmlns="http://www.w3.org/1998/Math/MathML">
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
         4
        </mn>
       </msup>
      </mrow>
      <annotation encoding="application/x-tex">
       10^4
      </annotation>
     </semantics>
    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.8141em;"></span><span class="mord">1</span><span class="mord"><span class="mord">0</span><span class="msupsub"><span class="vlist-t"><span class="vlist-r"><span class="vlist" style="height:0.8141em;"><span style="top:-3.063em;margin-right:0.05em;"><span class="pstrut" style="height:2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">4</span></span></span></span></span></span></span></span></span></span></span></span>. Если существует несколько возможных решений задачи, то разрешается вывести любое.</p></div><h3>Пример 1</h3><table class="sample-tests"><thead><tr><th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy input"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy input"></span></button></div></th><th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy output"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy output"></span></button></div></th></tr></thead><tbody><tr><td><pre>1
</pre></td><td><pre>1 
</pre></td></tr></tbody></table><h3>Пример 2</h3><table class="sample-tests"><thead><tr><th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy input"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy input"></span></button></div></th><th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy output"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy output"></span></button></div></th></tr></thead><tbody><tr><td><pre>2
</pre></td><td><pre>1 2 
</pre></td></tr></tbody></table></div>
