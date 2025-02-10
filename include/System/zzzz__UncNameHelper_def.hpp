#pragma once
// IWYU pragma private; include "System/UncNameHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UncNameHelper)
// Forward declare root types
namespace System {
class UncNameHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::UncNameHelper);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.UncNameHelper
class CORDL_TYPE UncNameHelper : public ::System::Object {
public:
// Declarations
/// @brief Method IsValid, addr 0x2cde6c4, size 0x2d0, virtual false, abstract: false, final false
static inline bool IsValid(::cordl_internals::Ptr<char16_t>  name, uint16_t  start, ::ByRef<int32_t>  returnedEnd, bool  notImplicitFile) ;

/// @brief Method ParseCanonicalName, addr 0x2cde6c0, size 0x4, virtual false, abstract: false, final false
static inline ::StringW ParseCanonicalName(::StringW  str, int32_t  start, int32_t  end, ::ByRef<bool>  loopback) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UncNameHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UncNameHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UncNameHelper(UncNameHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UncNameHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UncNameHelper(UncNameHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7457};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UncNameHelper, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::UncNameHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::UncNameHelper*, "System", "UncNameHelper");
