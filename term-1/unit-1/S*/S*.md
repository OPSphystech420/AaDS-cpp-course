<div class="problem-statement problem-statement_type_markdown">
    <div class="header">
        <h1 class="title">S*. Приоритетная очередь. Шаблоны</h1>
        <table class="limits">
            <tbody>
                <tr class="time-limit">
                    <td class="property-title">Ограничение времени</td>
                    <td>0.5&nbsp;секунд</td>
                </tr>
                <tr class="memory-limit">
                    <td class="property-title">Ограничение памяти</td>
                    <td>64.8 Мб</td>
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
            <p class="paragraph">В данной задаче вам необходимо реализовать шаблонные функции для работы с бинарной пирамидой (с максимумом на вершине):</p>
            <p class="paragraph"><em>PushHeap</em> - восстанавливает пирамиду после добавления нового элемента (Insert);</p>
            <p class="paragraph"><em>PopHeap</em> - восстанавливает пирамиду после извлечения максимального элемента из пирамиды.</p>
            <p class="paragraph">Функция <em>PushHeap</em> должна принимать два аргумента: <em>begin</em> - указатель на начало последовательности, <em>end</em> - указатель на конец последовательности (элемент следующий за последним). Поведение, ожидающееся от функции: вставляет в пирамиду элемент, находящийся на позиции <em>end-1</em>, восстанавливает пирамиду на диапазоне <em>[begin, end)</em>. Гарантируется, что перед выполнением функции <em>PushHeap</em> диапазон [begin, end - 1) является корректной пирамидой.</p>
            <p class="paragraph">Функция <em>PopHeap</em> должна принимать два аргумента: <em>begin</em> - указатель на начало последовательности, <em>end</em> - указатель на конец последовательности (элемент следующий за последним). Поведение, ожидающееся от функции: меняет местами элемент на позиции <em>begin</em> с элементом на позиции <em>end - 1</em> и восстанавливает пирамиду на диапазоне <em>[begin, end-1)</em>. Гарантируется, что перед выполнением функции <em>PopHeap</em> диапазон [begin, end) является корректной пирамидой.</p>
            <p class="paragraph"><strong>Пример:</strong></p>
            <p class="paragraph"><em>int heap[7]{9, 5, 4, 1, 2, 3, 6};</em> (последний элемент не вставлен)*</p>
            <p class="paragraph"><em>PushHeap(heap, heap + 7); // heap == {9, 5, 6, 1, 2, 3, 4} (вставили 6)</em></p>
            <p class="paragraph"><em>PopHeap(heap, heap + 7); // heap == {6, 5, 4, 1, 2, 3, 9} (извлекли 9)</em></p>
            <hr>
            <p class="paragraph">Ваш код будет проверяться на скрытых от вас юнит-тестах, проверяющих корректность шаблонной реализации. Требование к реализации: из операций сравнения можно использовать только операцию "&lt;".&lt; /p&gt;
                    </p><p class="paragraph">Пришлите на проверку заголовочный файл, содержащий ТОЛЬКО определение шаблона. Он будет включен в cpp файл с тестами автоматически (main писать не нужно!).</p>
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
                        <pre>4 7
1
2 9
2 4
2 9
2 9
2 7
1
</pre>
                    </td>
                    <td>
                        <pre>9
</pre>
                    </td>
                </tr>
            </tbody>
        </table>
    </div>
</div>
