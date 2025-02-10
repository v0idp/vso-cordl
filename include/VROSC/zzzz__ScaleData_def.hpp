#pragma once
// IWYU pragma private; include "VROSC/ScaleData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__Scale_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScaleData)
// Forward declare root types
namespace VROSC {
class ScaleData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ScaleData);
// Dependencies System.Object, VROSC.Scale
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ScaleData
class CORDL_TYPE ScaleData : public ::System::Object {
public:
// Declarations
/// @brief Field Customized, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_Customized, put=__cordl_internal_set_Customized)) bool  Customized;

/// @brief Field Locked, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_Locked, put=__cordl_internal_set_Locked)) bool  Locked;

/// @brief Field Scale, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Scale, put=__cordl_internal_set_Scale)) ::VROSC::Scale  Scale;

/// @brief Field StartNoteOffset, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_StartNoteOffset, put=__cordl_internal_set_StartNoteOffset)) int32_t  StartNoteOffset;

static inline ::VROSC::ScaleData* New_ctor() ;

constexpr bool const& __cordl_internal_get_Customized() const;

constexpr bool& __cordl_internal_get_Customized() ;

constexpr bool const& __cordl_internal_get_Locked() const;

constexpr bool& __cordl_internal_get_Locked() ;

constexpr ::VROSC::Scale const& __cordl_internal_get_Scale() const;

constexpr ::VROSC::Scale& __cordl_internal_get_Scale() ;

constexpr int32_t const& __cordl_internal_get_StartNoteOffset() const;

constexpr int32_t& __cordl_internal_get_StartNoteOffset() ;

constexpr void __cordl_internal_set_Customized(bool  value) ;

constexpr void __cordl_internal_set_Locked(bool  value) ;

constexpr void __cordl_internal_set_Scale(::VROSC::Scale  value) ;

constexpr void __cordl_internal_set_StartNoteOffset(int32_t  value) ;

/// @brief Method .ctor, addr 0x1841d1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScaleData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleData(ScaleData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleData(ScaleData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{404};

/// @brief Field StartNoteOffset, offset: 0x10, size: 0x4, def value: None
 int32_t  ___StartNoteOffset;

/// @brief Field Scale, offset: 0x14, size: 0x4, def value: None
 ::VROSC::Scale  ___Scale;

/// @brief Field Locked, offset: 0x18, size: 0x1, def value: None
 bool  ___Locked;

/// @brief Field Customized, offset: 0x19, size: 0x1, def value: None
 bool  ___Customized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ScaleData, ___StartNoteOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleData, ___Scale) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleData, ___Locked) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleData, ___Customized) == 0x19, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ScaleData, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ScaleData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScaleData*, "VROSC", "ScaleData");
