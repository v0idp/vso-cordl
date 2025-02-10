#pragma once
// IWYU pragma private; include "System/TimeZone.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TimeZone)
// Forward declare root types
namespace System {
class TimeZone;
}
// Write type traits
MARK_REF_PTR_T(::System::TimeZone);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.TimeZone
class CORDL_TYPE TimeZone : public ::System::Object {
public:
// Declarations
static inline ::System::TimeZone* New_ctor() ;

/// @brief Method .ctor, addr 0x275d5ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeZone(TimeZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeZone(TimeZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2194};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TimeZone, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::TimeZone);
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZone*, "System", "TimeZone");
