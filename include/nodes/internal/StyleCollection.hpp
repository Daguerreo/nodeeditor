#pragma once

#include "NodeStyle.hpp"
#include "ConnectionStyle.hpp"
#include "FlowViewStyle.hpp"
#include "Export.hpp"

namespace QtNodes
{

class NODE_EDITOR_PUBLIC StyleCollection
{
public:

  static
  NodeStyle const&
  nodeStyle();

  static
  ConnectionStyle const&
  connectionStyle();

  static
  FlowViewStyle const&
  flowViewStyle();

public:

  static
  void
  setNodeStyle(const NodeStyle&);

  static
  void
  setConnectionStyle(const ConnectionStyle&);

  static
  void
  setFlowViewStyle(const FlowViewStyle&);

private:

  StyleCollection() = default;

  StyleCollection(StyleCollection const&) = delete;

  StyleCollection&
  operator=(StyleCollection const&) = delete;

  static
  StyleCollection&
  instance();

private:

  NodeStyle _nodeStyle;

  ConnectionStyle _connectionStyle;

  FlowViewStyle _flowViewStyle;
};
}