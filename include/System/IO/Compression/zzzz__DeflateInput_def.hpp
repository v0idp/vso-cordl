#pragma once
// IWYU pragma private; include "System/IO/Compression/DeflateInput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeflateInput)
namespace System::IO::Compression {
struct DeflateInput_InputState;
}
// Forward declare root types
namespace System::IO::Compression {
class DeflateInput;
}
namespace System::IO::Compression {
struct DeflateInput_InputState;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::DeflateInput);
MARK_VAL_T(::System::IO::Compression::DeflateInput_InputState);
// Dependencies 
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.DeflateInput/InputState
struct CORDL_TYPE DeflateInput_InputState {
public:
// Declarations
/// @brief Method .ctor, addr 0x2b0abfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  count, int32_t  startIndex) ;

// Ctor Parameters []
// @brief default ctor
constexpr DeflateInput_InputState() ;

// Ctor Parameters [CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_startIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DeflateInput_InputState(int32_t  _count, int32_t  _startIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11269};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _count, offset: 0x0, size: 0x4, def value: None
 int32_t  _count;

/// @brief Field _startIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  _startIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::DeflateInput_InputState, _count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateInput_InputState, _startIndex) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::DeflateInput_InputState, 0x8>, "Size mismatch!");

} // namespace end def System::IO::Compression
// Dependencies System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.DeflateInput
class CORDL_TYPE DeflateInput : public ::System::Object {
public:
// Declarations
using InputState = ::System::IO::Compression::DeflateInput_InputState;

 __declspec(property(get=get_Buffer, put=set_Buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Buffer;

 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

 __declspec(property(get=get_StartIndex, put=set_StartIndex)) int32_t  StartIndex;

/// @brief Field <Buffer>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Buffer_k__BackingField, put=__cordl_internal_set__Buffer_k__BackingField)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _Buffer_k__BackingField;

/// @brief Field <Count>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Count_k__BackingField, put=__cordl_internal_set__Count_k__BackingField)) int32_t  _Count_k__BackingField;

/// @brief Field <StartIndex>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__StartIndex_k__BackingField, put=__cordl_internal_set__StartIndex_k__BackingField)) int32_t  _StartIndex_k__BackingField;

/// @brief Method ConsumeBytes, addr 0x2b0ab48, size 0x14, virtual false, abstract: false, final false
inline void ConsumeBytes(int32_t  n) ;

/// @brief Method DumpState, addr 0x2b0abf4, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::Compression::DeflateInput_InputState DumpState() ;

static inline ::System::IO::Compression::DeflateInput* New_ctor() ;

/// @brief Method RestoreState, addr 0x2b0ac04, size 0x8, virtual false, abstract: false, final false
inline void RestoreState(::System::IO::Compression::DeflateInput_InputState  state) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__Buffer_k__BackingField() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__Buffer_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Count_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Count_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__StartIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__StartIndex_k__BackingField() ;

constexpr void __cordl_internal_set__Buffer_k__BackingField(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__Count_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__StartIndex_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x2b0ac0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Buffer, addr 0x2b0abc4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Buffer() ;

/// @brief Method get_Count, addr 0x2b0abd4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_StartIndex, addr 0x2b0abe4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_StartIndex() ;

/// @brief Method set_Buffer, addr 0x2b0abcc, size 0x8, virtual false, abstract: false, final false
inline void set_Buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method set_Count, addr 0x2b0abdc, size 0x8, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

/// @brief Method set_StartIndex, addr 0x2b0abec, size 0x8, virtual false, abstract: false, final false
inline void set_StartIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeflateInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeflateInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DeflateInput(DeflateInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeflateInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeflateInput(DeflateInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11270};

/// @brief Field <Buffer>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____Buffer_k__BackingField;

/// @brief Field <Count>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____Count_k__BackingField;

/// @brief Field <StartIndex>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____StartIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::DeflateInput, ____Buffer_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateInput, ____Count_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateInput, ____StartIndex_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::DeflateInput, 0x20>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::DeflateInput);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateInput*, "System.IO.Compression", "DeflateInput");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateInput_InputState, "System.IO.Compression", "DeflateInput/InputState");
