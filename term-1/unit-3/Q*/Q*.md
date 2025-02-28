<div class="problem-statement problem-statement_type_markdown">
    <div class="header">
        <h1 class="title">Q*. Сортировка. Шаблоны</h1>
        <table class="limits">
            <tbody>
                <tr class="time-limit">
                    <td class="property-title">Ограничение времени</td>
                    <td>1&nbsp;секунда</td>
                </tr>
                <tr class="memory-limit">
                    <td class="property-title">Ограничение памяти</td>
                    <td>256.0 Мб</td>
                </tr>
                <tr class="input-file">
                    <td class="property-title">Ввод</td>
                    <td colspan="1">стандартный ввод или input.txt</td>
                </tr>
                <tr class="output-file">
                    <td class="property-title">Вывод</td>
                    <td colspan="1">стандартный вывод или output.txt</td>
                </tr>
            </tbody>
        </table>
    </div>
    <h2></h2>
    <div class="legend">
        <div class="Markdown">
            <p class="paragraph">В данной задаче вам необходимо реализовать шаблонную функцию <em>Sort</em>, сортирующую переданную последовательность. Функция должна принимать два аргумента: <em>begin</em> - указатель на начало последовательности, <em>end</em> - указатель на конец последовательности (элемент следующий за последним).</p>
            <p class="paragraph"><strong>Пример:</strong></p>
            <p class="paragraph"><em>int array[5]{3, 5, 1, 4, 2};</em></p>
            <p class="paragraph"><em>Sort(array + 1, array + 4);</em> // array = {3, 1, 4, 5, 2}</p>
            <hr>
            <p class="paragraph">Ваш код будет проверяться на скрытых от вас юнит-тестах, проверяющих корректность шаблонной реализации. Требование к реализации: из операций сравнения можно использовать только операцию "&lt;".&lt; /p&gt;
                    </p><p class="paragraph">Пришлите на проверку заголовочный файл, содержащий ТОЛЬКО определение шаблона. Он будет включен в cpp файл с тестами автоматически (main писать не нужно!).</p>
        </div>
    </div>
    <h2>Формат ввода</h2>
    <div class="input-specification">
        <div class="Markdown">
            <p class="paragraph">На вход подается массив размера <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-1" class="mjx-math"><span id="MJXc-Node-2" class="mjx-mrow"><span id="MJXc-Node-3" class="mjx-semantics"><span id="MJXc-Node-4" class="mjx-mrow"><span id="MJXc-Node-5" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">n</span></span><span id="MJXc-Node-6" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.49em;">≤</span></span><span id="MJXc-Node-7" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">1</span></span><span id="MJXc-Node-8" class="mjx-msup"><span class="mjx-base"><span id="MJXc-Node-9" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">0</span></span></span><span class="mjx-sup" style="font-size: 70.7%; vertical-align: 0.591em; padding-left: 0px; padding-right: 0.071em;"><span id="MJXc-Node-10" class="mjx-mn" style=""><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">5</span></span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-1"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <mi>n</mi>
                                    <mo>≤</mo>
                                    <mn>1</mn>
                                    <msup>
                                        <mn>0</mn>
                                        <mn>5</mn>
                                    </msup>
                                </mrow>
                                <annotation encoding="application/x-tex">n \le 10^5</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.7719400000000001em;vertical-align:-0.13597em;"></span><span class="mord mathnormal">n</span><span class="mspace" style="margin-right:0.2777777777777778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right:0.2777777777777778em;"></span></span><span class="base"><span class="strut" style="height:0.8141079999999999em;vertical-align:0em;"></span><span class="mord">1</span><span class="mord"><span class="mord">0</span><span class="msupsub"><span class="vlist-t"><span class="vlist-r"><span class="vlist" style="height:0.8141079999999999em;"><span style="top:-3.063em;margin-right:0.05em;"><span class="pstrut" style="height:2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">5</span></span></span></span></span></span></span></span></span></span></span>.</p>
        </div>
    </div>
    <h2>Пример</h2>
    <div>
        <table class="sample-tests">
            <thead>
                <tr>
                    <th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy input"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy input"></span></button></div></th>
                    <th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy output"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy output"></span></button></div></th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td>
                        <pre>5
5 2 3 1 4
</pre>
                    </td>
                    <td>
                        <pre>1 2 3 4 5 
</pre>
                    </td>
                </tr>
            </tbody>
        </table>
    </div>
</div>
