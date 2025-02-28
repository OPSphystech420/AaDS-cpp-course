<div class="problem-statement">
   <div class="header">
      <h1 class="title">K*. Лень - двигатель прогресса</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>1&nbsp;секунда</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>256Mb</td>
         </tr>
         <tr class="input-file">
            <td class="property-title">Ввод</td>
            <td colspan="1">стандартный ввод или input.txt</td>
         </tr>
         <tr class="output-file">
            <td class="property-title">Вывод</td>
            <td colspan="1">стандартный вывод или output.txt</td>
         </tr>
      </tbody></table>
   </div>
   <h2></h2>
   <div class="legend"> Виталик заметил, что сдача задач по алгоритмам в свою очередь сводится к другому алгоритму, состоящему из небольшого количества
      уникальных действий (открытие файла, сборка, тестирование, и т.д.). Всего он выявил 26 таких действий и обозначил каждое из
      них строчной буквой латинского алфавита (вот совпадение!). <!--l. 49-->
      <p style="text-indent: 0em;">Для оптимизации времени, потраченного на сдачу заданий, Виталик решил написать программу (скрипт),
      который бы автоматизировал некоторую часть этой рутинной работы. Идея довольно проста: скрипт в цикле выполняет <!--l. 49--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-1" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-2" class="mjx-mrow"><span id="MJXc-Node-3" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em; padding-right: 0.04em;">K</span></span></span></span></span><script type="math/mml" id="MathJax-Element-1"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi></math></script> фиксированных действий
      подряд, то есть сначала выполняется первое действие, затем второе и т.д. после окончания последнего действия работа скрипта
      продолжается с первого. При этом скрипт останавливается после фиксированного числа шагов (которое указывает Виталик). Время
      затраченное на написание скрипта Виталик считает оправданным, если он выполнит хотя бы <!--l. 49--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-4" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-5" class="mjx-mrow"><span id="MJXc-Node-6" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em; padding-right: 0.04em;">K</span></span><span id="MJXc-Node-7" class="mjx-mo MJXc-space2"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.308em; padding-bottom: 0.43em;">+</span></span><span id="MJXc-Node-8" class="mjx-mn MJXc-space2"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">1</span></span></span></span></span><script type="math/mml" id="MathJax-Element-2"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi> <mo>+</mo> <mn>1</mn></math></script> действие. Скрипт
      может запускаться только один раз. <!--l. 51-->
      </p><p style="text-indent: 0em;">По заданной последовательности действий определите количество способов написать "оправданный"скрипт.
      </p>
      <p></p>
      
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification"> В первой строке записано число <!--l. 54--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-9" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-10" class="mjx-mrow"><span id="MJXc-Node-11" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em; padding-right: 0.04em;">K</span></span></span></span></span><script type="math/mml" id="MathJax-Element-3"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi></math></script>
      &gt; 0 — количество действий, которые выполняются в цикле скрипта. Во второй строке записаны <!--l. 55--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-4-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-12" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-13" class="mjx-mrow"><span id="MJXc-Node-14" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em; padding-right: 0.085em;">N</span></span></span></span></span><script type="math/mml" id="MathJax-Element-4"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></script> (<!--l. 55--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-5-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-15" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-16" class="mjx-mrow"><span id="MJXc-Node-17" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em; padding-right: 0.04em;">K</span></span><span id="MJXc-Node-18" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.247em; padding-bottom: 0.369em;">&lt;</span></span><span id="MJXc-Node-19" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em; padding-right: 0.085em;">N</span></span><span id="MJXc-Node-20" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.491em;">≤</span></span><span id="MJXc-Node-21" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">1</span></span><span id="MJXc-Node-22" class="mjx-msup"><span class="mjx-base"><span id="MJXc-Node-23" class="mjx-mrow"><span id="MJXc-Node-24" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">0</span></span></span></span><span class="mjx-sup" style="font-size: 70.7%; vertical-align: 0.591em; padding-left: 0px; padding-right: 0.071em;"><span id="MJXc-Node-25" class="mjx-mrow" style=""><span id="MJXc-Node-26" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">6</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-5"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi> <mo>&lt;</mo> <mi>N</mi> <mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>6</mn></mrow></msup></math></script>)
      строчных латинских букв, обозначающих алгоритм сдачи задания. 
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification"> Выведите ответ на задачу </div>
   <h2>Пример</h2>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy input"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy input"></span></button></div></th>
            <th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy output"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy output"></span></button></div></th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>2
zabacabab
</pre></td>
            <td><pre>5
</pre></td>
         </tr>
      </tbody>
   </table>
   <h2>Примечания</h2>
   <div class="notes"><span style="font-weight: bold;">Пояснение к примеру (способы написания скрипта):</span><!--l. 63-->
      <p style="text-indent: 0em;">Формат: "действия, количество шагов, в какой момент применяется (индекс в 0-нумерации)" </p><ol style="list-style-type: decimal;">
      <li>̈ab̈, 3, 1 </li>
      <li>̈ab̈, 3, 5 </li>
      <li>̈ab̈, 4, 5 </li>
      <li>̈ac̈, 3, 3 </li>
      <li>̈bä, 3, 6</li>
      </ol>
      <p></p>
      
   </div>
</div>
