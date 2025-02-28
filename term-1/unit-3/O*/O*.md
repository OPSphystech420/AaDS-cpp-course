<div class="problem-statement problem-statement_type_markdown">
    <div class="header">
        <h1 class="title">O*. Бинпоиск. Шаблоны</h1>
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
            <p class="paragraph">Пришлите заголовочный файл с определениями трех шаблонных функций для работы с отсортированными последовательностями. Каждая функция принимает три аргумента: <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-1" class="mjx-math"><span id="MJXc-Node-2" class="mjx-mrow"><span id="MJXc-Node-3" class="mjx-semantics"><span id="MJXc-Node-4" class="mjx-mrow"><span id="MJXc-Node-5" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em;">b</span></span><span id="MJXc-Node-6" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span><span id="MJXc-Node-7" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.49em; padding-right: 0.003em;">g</span></span><span id="MJXc-Node-8" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.429em; padding-bottom: 0.307em;">i</span></span><span id="MJXc-Node-9" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">n</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-1"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <mi>b</mi>
                                    <mi>e</mi>
                                    <mi>g</mi>
                                    <mi>i</mi>
                                    <mi>n</mi>
                                </mrow>
                                <annotation encoding="application/x-tex">begin</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.8888799999999999em;vertical-align:-0.19444em;"></span><span class="mord mathnormal">b</span><span class="mord mathnormal">e</span><span class="mord mathnormal" style="margin-right:0.03588em;">g</span><span class="mord mathnormal">in</span></span></span></span> - указатель на начало последовательности, <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-10" class="mjx-math"><span id="MJXc-Node-11" class="mjx-mrow"><span id="MJXc-Node-12" class="mjx-semantics"><span id="MJXc-Node-13" class="mjx-mrow"><span id="MJXc-Node-14" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span><span id="MJXc-Node-15" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">n</span></span><span id="MJXc-Node-16" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.003em;">d</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-2"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <mi>e</mi>
                                    <mi>n</mi>
                                    <mi>d</mi>
                                </mrow>
                                <annotation encoding="application/x-tex">end</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.69444em;vertical-align:0em;"></span><span class="mord mathnormal">e</span><span class="mord mathnormal">n</span><span class="mord mathnormal">d</span></span></span></span> - указатель на конец последовательности (элемент следующий за последним), <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-17" class="mjx-math"><span id="MJXc-Node-18" class="mjx-mrow"><span id="MJXc-Node-19" class="mjx-semantics"><span id="MJXc-Node-20" class="mjx-mrow"><span id="MJXc-Node-21" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">v</span></span><span id="MJXc-Node-22" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">a</span></span><span id="MJXc-Node-23" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em;">l</span></span><span id="MJXc-Node-24" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">u</span></span><span id="MJXc-Node-25" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-3"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <mi>v</mi>
                                    <mi>a</mi>
                                    <mi>l</mi>
                                    <mi>u</mi>
                                    <mi>e</mi>
                                </mrow>
                                <annotation encoding="application/x-tex">value</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.69444em;vertical-align:0em;"></span><span class="mord mathnormal" style="margin-right:0.03588em;">v</span><span class="mord mathnormal">a</span><span class="mord mathnormal" style="margin-right:0.01968em;">l</span><span class="mord mathnormal">u</span><span class="mord mathnormal">e</span></span></span></span> - запрос.</p>
            <ul>
                <li>
                    <p class="paragraph"><em>BinarySearch</em>
                    </p><ul>
                        <li>функция, осуществляющая проверку наличия элемента <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-4-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-26" class="mjx-math"><span id="MJXc-Node-27" class="mjx-mrow"><span id="MJXc-Node-28" class="mjx-semantics"><span id="MJXc-Node-29" class="mjx-mrow"><span id="MJXc-Node-30" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">v</span></span><span id="MJXc-Node-31" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">a</span></span><span id="MJXc-Node-32" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em;">l</span></span><span id="MJXc-Node-33" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">u</span></span><span id="MJXc-Node-34" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-4"><math xmlns="http://www.w3.org/1998/Math/MathML">
                                        <semantics>
                                            <mrow>
                                                <mi>v</mi>
                                                <mi>a</mi>
                                                <mi>l</mi>
                                                <mi>u</mi>
                                                <mi>e</mi>
                                            </mrow>
                                            <annotation encoding="application/x-tex">value</annotation>
                                        </semantics>
                                    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.69444em;vertical-align:0em;"></span><span class="mord mathnormal" style="margin-right:0.03588em;">v</span><span class="mord mathnormal">a</span><span class="mord mathnormal" style="margin-right:0.01968em;">l</span><span class="mord mathnormal">u</span><span class="mord mathnormal">e</span></span></span></span> в отсортированной последовательности <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-5-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-35" class="mjx-math"><span id="MJXc-Node-36" class="mjx-mrow"><span id="MJXc-Node-37" class="mjx-semantics"><span id="MJXc-Node-38" class="mjx-mrow"><span id="MJXc-Node-39" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.49em; padding-bottom: 0.612em;">[</span></span><span id="MJXc-Node-40" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em;">b</span></span><span id="MJXc-Node-41" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span><span id="MJXc-Node-42" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.49em; padding-right: 0.003em;">g</span></span><span id="MJXc-Node-43" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.429em; padding-bottom: 0.307em;">i</span></span><span id="MJXc-Node-44" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">n</span></span><span id="MJXc-Node-45" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.18em; padding-bottom: 0.551em;">,</span></span><span id="MJXc-Node-46" class="mjx-mi MJXc-space1"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span><span id="MJXc-Node-47" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">n</span></span><span id="MJXc-Node-48" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.003em;">d</span></span><span id="MJXc-Node-49" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.49em; padding-bottom: 0.612em;">)</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-5"><math xmlns="http://www.w3.org/1998/Math/MathML">
                                        <semantics>
                                            <mrow>
                                                <mo stretchy="false">[</mo>
                                                <mi>b</mi>
                                                <mi>e</mi>
                                                <mi>g</mi>
                                                <mi>i</mi>
                                                <mi>n</mi>
                                                <mo separator="true">,</mo>
                                                <mi>e</mi>
                                                <mi>n</mi>
                                                <mi>d</mi>
                                                <mo stretchy="false">)</mo>
                                            </mrow>
                                            <annotation encoding="application/x-tex">[begin, end)</annotation>
                                        </semantics>
                                    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:1em;vertical-align:-0.25em;"></span><span class="mopen">[</span><span class="mord mathnormal">b</span><span class="mord mathnormal">e</span><span class="mord mathnormal" style="margin-right:0.03588em;">g</span><span class="mord mathnormal">in</span><span class="mpunct">,</span><span class="mspace" style="margin-right:0.16666666666666666em;"></span><span class="mord mathnormal">e</span><span class="mord mathnormal">n</span><span class="mord mathnormal">d</span><span class="mclose">)</span></span></span></span>. Возвращает <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-6-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-50" class="mjx-math"><span id="MJXc-Node-51" class="mjx-mrow"><span id="MJXc-Node-52" class="mjx-semantics"><span id="MJXc-Node-53" class="mjx-mrow"><span id="MJXc-Node-54" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.429em; padding-bottom: 0.307em;">t</span></span><span id="MJXc-Node-55" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">r</span></span><span id="MJXc-Node-56" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">u</span></span><span id="MJXc-Node-57" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-6"><math xmlns="http://www.w3.org/1998/Math/MathML">
                                        <semantics>
                                            <mrow>
                                                <mi>t</mi>
                                                <mi>r</mi>
                                                <mi>u</mi>
                                                <mi>e</mi>
                                            </mrow>
                                            <annotation encoding="application/x-tex">true</annotation>
                                        </semantics>
                                    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.61508em;vertical-align:0em;"></span><span class="mord mathnormal">t</span><span class="mord mathnormal" style="margin-right:0.02778em;">r</span><span class="mord mathnormal">u</span><span class="mord mathnormal">e</span></span></span></span>, если и только если на полуинтервале <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-7-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-58" class="mjx-math"><span id="MJXc-Node-59" class="mjx-mrow"><span id="MJXc-Node-60" class="mjx-semantics"><span id="MJXc-Node-61" class="mjx-mrow"><span id="MJXc-Node-62" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.49em; padding-bottom: 0.612em;">[</span></span><span id="MJXc-Node-63" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em;">b</span></span><span id="MJXc-Node-64" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span><span id="MJXc-Node-65" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.49em; padding-right: 0.003em;">g</span></span><span id="MJXc-Node-66" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.429em; padding-bottom: 0.307em;">i</span></span><span id="MJXc-Node-67" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">n</span></span><span id="MJXc-Node-68" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.18em; padding-bottom: 0.551em;">,</span></span><span id="MJXc-Node-69" class="mjx-mi MJXc-space1"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span><span id="MJXc-Node-70" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">n</span></span><span id="MJXc-Node-71" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.003em;">d</span></span><span id="MJXc-Node-72" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.49em; padding-bottom: 0.612em;">)</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-7"><math xmlns="http://www.w3.org/1998/Math/MathML">
                                        <semantics>
                                            <mrow>
                                                <mo stretchy="false">[</mo>
                                                <mi>b</mi>
                                                <mi>e</mi>
                                                <mi>g</mi>
                                                <mi>i</mi>
                                                <mi>n</mi>
                                                <mo separator="true">,</mo>
                                                <mi>e</mi>
                                                <mi>n</mi>
                                                <mi>d</mi>
                                                <mo stretchy="false">)</mo>
                                            </mrow>
                                            <annotation encoding="application/x-tex">[begin, end)</annotation>
                                        </semantics>
                                    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:1em;vertical-align:-0.25em;"></span><span class="mopen">[</span><span class="mord mathnormal">b</span><span class="mord mathnormal">e</span><span class="mord mathnormal" style="margin-right:0.03588em;">g</span><span class="mord mathnormal">in</span><span class="mpunct">,</span><span class="mspace" style="margin-right:0.16666666666666666em;"></span><span class="mord mathnormal">e</span><span class="mord mathnormal">n</span><span class="mord mathnormal">d</span><span class="mclose">)</span></span></span></span> имеется значение <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-8-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-73" class="mjx-math"><span id="MJXc-Node-74" class="mjx-mrow"><span id="MJXc-Node-75" class="mjx-semantics"><span id="MJXc-Node-76" class="mjx-mrow"><span id="MJXc-Node-77" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">v</span></span><span id="MJXc-Node-78" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">a</span></span><span id="MJXc-Node-79" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em;">l</span></span><span id="MJXc-Node-80" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">u</span></span><span id="MJXc-Node-81" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-8"><math xmlns="http://www.w3.org/1998/Math/MathML">
                                        <semantics>
                                            <mrow>
                                                <mi>v</mi>
                                                <mi>a</mi>
                                                <mi>l</mi>
                                                <mi>u</mi>
                                                <mi>e</mi>
                                            </mrow>
                                            <annotation encoding="application/x-tex">value</annotation>
                                        </semantics>
                                    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.69444em;vertical-align:0em;"></span><span class="mord mathnormal" style="margin-right:0.03588em;">v</span><span class="mord mathnormal">a</span><span class="mord mathnormal" style="margin-right:0.01968em;">l</span><span class="mord mathnormal">u</span><span class="mord mathnormal">e</span></span></span></span>.</li>
                    </ul>
                    <p></p>
                </li>
                <li>
                    <p class="paragraph"><em>LowerBound</em>
                    </p><ul>
                        <li>функция, осуществляющая поиск первого элемента не меньшего (<span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-9-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-82" class="mjx-math"><span id="MJXc-Node-83" class="mjx-mrow"><span id="MJXc-Node-84" class="mjx-semantics"><span id="MJXc-Node-85" class="mjx-mrow"><span id="MJXc-Node-86" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.49em;">≥</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-9"><math xmlns="http://www.w3.org/1998/Math/MathML">
                                        <semantics>
                                            <mrow>
                                                <mo>≥</mo>
                                            </mrow>
                                            <annotation encoding="application/x-tex">\geq</annotation>
                                        </semantics>
                                    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.7719400000000001em;vertical-align:-0.13597em;"></span><span class="mrel">≥</span></span></span></span>) <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-10-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-87" class="mjx-math"><span id="MJXc-Node-88" class="mjx-mrow"><span id="MJXc-Node-89" class="mjx-semantics"><span id="MJXc-Node-90" class="mjx-mrow"><span id="MJXc-Node-91" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">v</span></span><span id="MJXc-Node-92" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">a</span></span><span id="MJXc-Node-93" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em;">l</span></span><span id="MJXc-Node-94" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">u</span></span><span id="MJXc-Node-95" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-10"><math xmlns="http://www.w3.org/1998/Math/MathML">
                                        <semantics>
                                            <mrow>
                                                <mi>v</mi>
                                                <mi>a</mi>
                                                <mi>l</mi>
                                                <mi>u</mi>
                                                <mi>e</mi>
                                            </mrow>
                                            <annotation encoding="application/x-tex">value</annotation>
                                        </semantics>
                                    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.69444em;vertical-align:0em;"></span><span class="mord mathnormal" style="margin-right:0.03588em;">v</span><span class="mord mathnormal">a</span><span class="mord mathnormal" style="margin-right:0.01968em;">l</span><span class="mord mathnormal">u</span><span class="mord mathnormal">e</span></span></span></span> на полуинтервале <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-11-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-96" class="mjx-math"><span id="MJXc-Node-97" class="mjx-mrow"><span id="MJXc-Node-98" class="mjx-semantics"><span id="MJXc-Node-99" class="mjx-mrow"><span id="MJXc-Node-100" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.49em; padding-bottom: 0.612em;">[</span></span><span id="MJXc-Node-101" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em;">b</span></span><span id="MJXc-Node-102" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span><span id="MJXc-Node-103" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.49em; padding-right: 0.003em;">g</span></span><span id="MJXc-Node-104" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.429em; padding-bottom: 0.307em;">i</span></span><span id="MJXc-Node-105" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">n</span></span><span id="MJXc-Node-106" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.18em; padding-bottom: 0.551em;">,</span></span><span id="MJXc-Node-107" class="mjx-mi MJXc-space1"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span><span id="MJXc-Node-108" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">n</span></span><span id="MJXc-Node-109" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.003em;">d</span></span><span id="MJXc-Node-110" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.49em; padding-bottom: 0.612em;">)</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-11"><math xmlns="http://www.w3.org/1998/Math/MathML">
                                        <semantics>
                                            <mrow>
                                                <mo stretchy="false">[</mo>
                                                <mi>b</mi>
                                                <mi>e</mi>
                                                <mi>g</mi>
                                                <mi>i</mi>
                                                <mi>n</mi>
                                                <mo separator="true">,</mo>
                                                <mi>e</mi>
                                                <mi>n</mi>
                                                <mi>d</mi>
                                                <mo stretchy="false">)</mo>
                                            </mrow>
                                            <annotation encoding="application/x-tex">[begin, end)</annotation>
                                        </semantics>
                                    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:1em;vertical-align:-0.25em;"></span><span class="mopen">[</span><span class="mord mathnormal">b</span><span class="mord mathnormal">e</span><span class="mord mathnormal" style="margin-right:0.03588em;">g</span><span class="mord mathnormal">in</span><span class="mpunct">,</span><span class="mspace" style="margin-right:0.16666666666666666em;"></span><span class="mord mathnormal">e</span><span class="mord mathnormal">n</span><span class="mord mathnormal">d</span><span class="mclose">)</span></span></span></span>. Возвращает указатель на найденный элемент, либо <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-12-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-111" class="mjx-math"><span id="MJXc-Node-112" class="mjx-mrow"><span id="MJXc-Node-113" class="mjx-semantics"><span id="MJXc-Node-114" class="mjx-mrow"><span id="MJXc-Node-115" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span><span id="MJXc-Node-116" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">n</span></span><span id="MJXc-Node-117" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.003em;">d</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-12"><math xmlns="http://www.w3.org/1998/Math/MathML">
                                        <semantics>
                                            <mrow>
                                                <mi>e</mi>
                                                <mi>n</mi>
                                                <mi>d</mi>
                                            </mrow>
                                            <annotation encoding="application/x-tex">end</annotation>
                                        </semantics>
                                    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.69444em;vertical-align:0em;"></span><span class="mord mathnormal">e</span><span class="mord mathnormal">n</span><span class="mord mathnormal">d</span></span></span></span>, если такого нет.</li>
                    </ul>
                    <p></p>
                </li>
                <li>
                    <p class="paragraph"><em>UpperBound</em>
                    </p><ul>
                        <li>функция, осуществляющая поиск первого элемента строго большего (<span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-13-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-118" class="mjx-math"><span id="MJXc-Node-119" class="mjx-mrow"><span id="MJXc-Node-120" class="mjx-semantics"><span id="MJXc-Node-121" class="mjx-mrow"><span id="MJXc-Node-122" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.246em; padding-bottom: 0.368em;">&gt;</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-13"><math xmlns="http://www.w3.org/1998/Math/MathML">
                                        <semantics>
                                            <mrow>
                                                <mo>&gt;</mo>
                                            </mrow>
                                            <annotation encoding="application/x-tex">\gt</annotation>
                                        </semantics>
                                    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.5782em;vertical-align:-0.0391em;"></span><span class="mrel">&gt;</span></span></span></span>) <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-14-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-123" class="mjx-math"><span id="MJXc-Node-124" class="mjx-mrow"><span id="MJXc-Node-125" class="mjx-semantics"><span id="MJXc-Node-126" class="mjx-mrow"><span id="MJXc-Node-127" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">v</span></span><span id="MJXc-Node-128" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">a</span></span><span id="MJXc-Node-129" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em;">l</span></span><span id="MJXc-Node-130" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">u</span></span><span id="MJXc-Node-131" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-14"><math xmlns="http://www.w3.org/1998/Math/MathML">
                                        <semantics>
                                            <mrow>
                                                <mi>v</mi>
                                                <mi>a</mi>
                                                <mi>l</mi>
                                                <mi>u</mi>
                                                <mi>e</mi>
                                            </mrow>
                                            <annotation encoding="application/x-tex">value</annotation>
                                        </semantics>
                                    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.69444em;vertical-align:0em;"></span><span class="mord mathnormal" style="margin-right:0.03588em;">v</span><span class="mord mathnormal">a</span><span class="mord mathnormal" style="margin-right:0.01968em;">l</span><span class="mord mathnormal">u</span><span class="mord mathnormal">e</span></span></span></span> на полуинтервале <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-15-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-132" class="mjx-math"><span id="MJXc-Node-133" class="mjx-mrow"><span id="MJXc-Node-134" class="mjx-semantics"><span id="MJXc-Node-135" class="mjx-mrow"><span id="MJXc-Node-136" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.49em; padding-bottom: 0.612em;">[</span></span><span id="MJXc-Node-137" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em;">b</span></span><span id="MJXc-Node-138" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span><span id="MJXc-Node-139" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.49em; padding-right: 0.003em;">g</span></span><span id="MJXc-Node-140" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.429em; padding-bottom: 0.307em;">i</span></span><span id="MJXc-Node-141" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">n</span></span><span id="MJXc-Node-142" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.18em; padding-bottom: 0.551em;">,</span></span><span id="MJXc-Node-143" class="mjx-mi MJXc-space1"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span><span id="MJXc-Node-144" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">n</span></span><span id="MJXc-Node-145" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.003em;">d</span></span><span id="MJXc-Node-146" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.49em; padding-bottom: 0.612em;">)</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-15"><math xmlns="http://www.w3.org/1998/Math/MathML">
                                        <semantics>
                                            <mrow>
                                                <mo stretchy="false">[</mo>
                                                <mi>b</mi>
                                                <mi>e</mi>
                                                <mi>g</mi>
                                                <mi>i</mi>
                                                <mi>n</mi>
                                                <mo separator="true">,</mo>
                                                <mi>e</mi>
                                                <mi>n</mi>
                                                <mi>d</mi>
                                                <mo stretchy="false">)</mo>
                                            </mrow>
                                            <annotation encoding="application/x-tex">[begin, end)</annotation>
                                        </semantics>
                                    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:1em;vertical-align:-0.25em;"></span><span class="mopen">[</span><span class="mord mathnormal">b</span><span class="mord mathnormal">e</span><span class="mord mathnormal" style="margin-right:0.03588em;">g</span><span class="mord mathnormal">in</span><span class="mpunct">,</span><span class="mspace" style="margin-right:0.16666666666666666em;"></span><span class="mord mathnormal">e</span><span class="mord mathnormal">n</span><span class="mord mathnormal">d</span><span class="mclose">)</span></span></span></span>. Возвращает указатель на найденный элемент, либо <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-16-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-147" class="mjx-math"><span id="MJXc-Node-148" class="mjx-mrow"><span id="MJXc-Node-149" class="mjx-semantics"><span id="MJXc-Node-150" class="mjx-mrow"><span id="MJXc-Node-151" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">e</span></span><span id="MJXc-Node-152" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">n</span></span><span id="MJXc-Node-153" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.003em;">d</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-16"><math xmlns="http://www.w3.org/1998/Math/MathML">
                                        <semantics>
                                            <mrow>
                                                <mi>e</mi>
                                                <mi>n</mi>
                                                <mi>d</mi>
                                            </mrow>
                                            <annotation encoding="application/x-tex">end</annotation>
                                        </semantics>
                                    </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.69444em;vertical-align:0em;"></span><span class="mord mathnormal">e</span><span class="mord mathnormal">n</span><span class="mord mathnormal">d</span></span></span></span>, если такого нет.</li>
                    </ul>
                    <p></p>
                </li>
            </ul>
            <p class="paragraph"><strong>Важно:</strong> используйте только сравнение на меньше (<span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-17-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-154" class="mjx-math"><span id="MJXc-Node-155" class="mjx-mrow"><span id="MJXc-Node-156" class="mjx-semantics"><span id="MJXc-Node-157" class="mjx-mrow"><span id="MJXc-Node-158" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.246em; padding-bottom: 0.368em;">&lt;</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-17"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <mo>&lt;</mo>
                                </mrow>
                                <annotation encoding="application/x-tex">\lt</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.5782em;vertical-align:-0.0391em;"></span><span class="mrel">&lt;</span></span></span></span>) и избегайте лишних копирований элементов. То есть считайте, что элементы последовательности не копируемы и могут быть сравнены только с помощью операции <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-18-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-159" class="mjx-math"><span id="MJXc-Node-160" class="mjx-mrow"><span id="MJXc-Node-161" class="mjx-semantics"><span id="MJXc-Node-162" class="mjx-mrow"><span id="MJXc-Node-163" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.246em; padding-bottom: 0.368em;">&lt;</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-18"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <mo>&lt;</mo>
                                </mrow>
                                <annotation encoding="application/x-tex">\lt</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.5782em;vertical-align:-0.0391em;"></span><span class="mrel">&lt;</span></span></span></span>.</p>
            <p class="paragraph"><strong>Пример:</strong></p>
            <p class="paragraph"><em>int array[5]{1, 2, 3, 3, 5};</em></p>
            <p class="paragraph"><em>BinarySearch(array + 3, array + 4, 2); // false</em></p>
            <p class="paragraph"><em>LowerBound(array + 1, array + 5, 3); // указатель на 2й элемент</em></p>
            <p class="paragraph"><em>UpperBound(array, array + 2, 4); // указатель на 2й элемент (на [0, 2) такого элемента нет)</em></p>
            <hr>
            <p class="paragraph">Пришлите на проверку заголовочный файл, содержащий ТОЛЬКО определения шаблонов. Он будет включен в cpp файл с тестами автоматически (main писать не нужно!).</p>
        </div>
    </div>
    <h2>Формат ввода</h2>
    <div class="input-specification">
        <div class="Markdown">
            <p class="paragraph"><strong>Данная информация нужна только для понимания примера. Обработку пользовательского ввода писать не нужно.</strong>
                <strong>Вместо указателей в примере вводятся и выводятся индексы элементов.</strong>
            </p>
            <p class="paragraph">На первой строчке подается число элементов в последовательности, а далее сами элементы.</p>
            <p class="paragraph">В следующих строках следует число запросов и сами запросы в формате (begin, end, value).</p>
        </div>
    </div>
    <h2>Формат вывода</h2>
    <div class="output-specification">
        <div class="Markdown">
            <p class="paragraph"><strong>Данная информация нужна только для понимания примера. Ваши функции ничего выводить не должны.</strong></p>
            <p class="paragraph">Выводятся 3 числа - результаты вызова <em>BinarySearch</em>, <em>LowerBound</em> и <em>UpperBound</em> соответственно.</p>
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
1 2 3 4 5
5
0 3 4
0 3 3
1 5 6
1 2 2
0 5 5
</pre>
                    </td>
                    <td>
                        <pre>NO 3 3
YES 2 3
NO 4 4
YES 0 1
YES 4 5
</pre>
                    </td>
                </tr>
            </tbody>
        </table>
    </div>
</div>
