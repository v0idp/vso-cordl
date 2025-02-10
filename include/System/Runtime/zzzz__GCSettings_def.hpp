#pragma once
// IWYU pragma private; include "System/Runtime/GCSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/zzzz__GCLargeObjectHeapCompactionMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GCSettings)
namespace System::Runtime {
struct GCLargeObjectHeapCompactionMode;
}
// Forward declare root types
namespace System::Runtime {
class GCSettings;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::GCSettings);
// Dependencies System.Object, System.Runtime.GCLargeObjectHeapCompactionMode
namespace System::Runtime {
// Is value type: false
// CS Name: System.Runtime.GCSettings
class CORDL_TYPE GCSettings : public ::System::Object {
public:
// Declarations
/// @brief Field <LargeObjectHeapCompactionMode>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LargeObjectHeapCompactionMode_k__BackingField, put=setStaticF__LargeObjectHeapCompactionMode_k__BackingField)) ::System::Runtime::GCLargeObjectHeapCompactionMode  _LargeObjectHeapCompactionMode_k__BackingField;

static inline ::System::Runtime::GCLargeObjectHeapCompactionMode getStaticF__LargeObjectHeapCompactionMode_k__BackingField() ;

static inline void setStaticF__LargeObjectHeapCompactionMode_k__BackingField(::System::Runtime::GCLargeObjectHeapCompactionMode  value) ;

/// @brief Method set_LargeObjectHeapCompactionMode, addr 0x262ed40, size 0x4c, virtual false, abstract: false, final false
static inline void set_LargeObjectHeapCompactionMode(::System::Runtime::GCLargeObjectHeapCompactionMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GCSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GCSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GCSettings(GCSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GCSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GCSettings(GCSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2705};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::GCSettings, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime
NEED_NO_BOX(::System::Runtime::GCSettings);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::GCSettings*, "System.Runtime", "GCSettings");
