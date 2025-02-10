#pragma once
// IWYU pragma private; include "VROSC/ValueSmoother.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueSmoother)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class ValueSmoother;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ValueSmoother);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ValueSmoother
class CORDL_TYPE ValueSmoother : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field _buffer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::System::Collections::Generic::List_1<float_t>*  _buffer;

/// @brief Field _smoothFrames, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__smoothFrames, put=__cordl_internal_set__smoothFrames)) int32_t  _smoothFrames;

static inline ::VROSC::ValueSmoother* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1721b38, size 0x4, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x1721d6c, size 0x4, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x1721d68, size 0x4, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method TransformValue, addr 0x1721b3c, size 0x22c, virtual false, abstract: false, final false
inline ::VROSC::Signal* TransformValue(::VROSC::Signal*  signal) ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get__buffer() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get__buffer() ;

constexpr int32_t const& __cordl_internal_get__smoothFrames() const;

constexpr int32_t& __cordl_internal_get__smoothFrames() ;

constexpr void __cordl_internal_set__buffer(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set__smoothFrames(int32_t  value) ;

/// @brief Method .ctor, addr 0x1721d70, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueSmoother() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueSmoother", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueSmoother(ValueSmoother && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueSmoother", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueSmoother(ValueSmoother const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{994};

/// @brief Field _smoothFrames, offset: 0x48, size: 0x4, def value: None
 int32_t  ____smoothFrames;

/// @brief Field _buffer, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ____buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ValueSmoother, ____smoothFrames) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ValueSmoother, ____buffer) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ValueSmoother, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ValueSmoother);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ValueSmoother*, "VROSC", "ValueSmoother");
