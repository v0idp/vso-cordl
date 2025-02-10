#pragma once
// IWYU pragma private; include "VROSC/ServicesWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ServicesWrapper)
namespace VROSC {
class FirebaseWrapper;
}
// Forward declare root types
namespace VROSC {
class ServicesWrapper;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ServicesWrapper);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ServicesWrapper
class CORDL_TYPE ServicesWrapper : public ::System::Object {
public:
// Declarations
/// @brief Field Firebase, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Firebase, put=setStaticF_Firebase)) ::VROSC::FirebaseWrapper*  Firebase;

static inline ::VROSC::FirebaseWrapper* getStaticF_Firebase() ;

static inline void setStaticF_Firebase(::VROSC::FirebaseWrapper*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServicesWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServicesWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServicesWrapper(ServicesWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServicesWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServicesWrapper(ServicesWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{329};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::ServicesWrapper, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ServicesWrapper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ServicesWrapper*, "VROSC", "ServicesWrapper");
