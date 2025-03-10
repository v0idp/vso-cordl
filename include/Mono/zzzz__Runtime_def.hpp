#pragma once
// IWYU pragma private; include "Mono/Runtime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Runtime)
namespace System {
class Object;
}
// Forward declare root types
namespace Mono {
class Runtime;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Runtime);
// Dependencies System.Object
namespace Mono {
// Is value type: false
// CS Name: Mono.Runtime
class CORDL_TYPE Runtime : public ::System::Object {
public:
// Declarations
/// @brief Field dump, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dump, put=setStaticF_dump)) ::System::Object*  dump;

static inline ::System::Object* getStaticF_dump() ;

static inline void setStaticF_dump(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Runtime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Runtime", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Runtime(Runtime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Runtime", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Runtime(Runtime const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1937};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Runtime, 0x10>, "Size mismatch!");

} // namespace end def Mono
NEED_NO_BOX(::Mono::Runtime);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Runtime*, "Mono", "Runtime");
