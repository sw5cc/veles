/*
 * Copyright 2018 CodiLime
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#pragma once

#include <iostream>
#include <QMouseEvent>
#include <QObject>
#include <QWidget>
#include <QtGui/QPainter>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>

#include "ui/disasm/disasm.h"

namespace veles {
namespace ui {
namespace disasm {

class Row : public QWidget {
  Q_OBJECT

 public slots:
 signals:
  void chunkCollapse(const ChunkID& id);

 public:
  explicit Row();

  enum ColumnName { Address, Chunks, Comments };
  void toggleColumn(ColumnName column_name);

 public:
  QLabel* text_;
  QHBoxLayout* layout_;
};

}  // namespace disasm
}  // namespace ui
}  // namespace veles