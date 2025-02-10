#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Debugger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Debugger)
namespace DG::Tweening {
struct LogBehaviour;
}
namespace DG::Tweening {
class Tween;
}
namespace System {
class Object;
}
// Forward declare root types
namespace DG::Tweening::Core {
class Debugger;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Core::Debugger);
// Dependencies System.Object
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.Debugger
class CORDL_TYPE Debugger : public ::System::Object {
public:
// Declarations
/// @brief Field _logPriority, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__logPriority, put=setStaticF__logPriority)) int32_t  _logPriority;

/// @brief Method Log, addr 0x18e3830, size 0x124, virtual false, abstract: false, final false
static inline void Log(::System::Object*  message) ;

/// @brief Method LogAddActiveTweenError, addr 0x18e41f4, size 0x60, virtual false, abstract: false, final false
static inline void LogAddActiveTweenError(::StringW  errorInfo, ::DG::Tweening::Tween*  t) ;

/// @brief Method LogError, addr 0x18e3c2c, size 0x124, virtual false, abstract: false, final false
static inline void LogError(::System::Object*  message) ;

/// @brief Method LogInvalidTween, addr 0x18e3fa0, size 0x44, virtual false, abstract: false, final false
static inline void LogInvalidTween(::DG::Tweening::Tween*  t) ;

/// @brief Method LogMissingMaterialProperty, addr 0x18e410c, size 0x88, virtual false, abstract: false, final false
static inline void LogMissingMaterialProperty(int32_t  propertyId) ;

/// @brief Method LogMissingMaterialProperty, addr 0x18e40b8, size 0x54, virtual false, abstract: false, final false
static inline void LogMissingMaterialProperty(::StringW  propertyName) ;

/// @brief Method LogNestedTween, addr 0x18e3fe4, size 0x48, virtual false, abstract: false, final false
static inline void LogNestedTween(::DG::Tweening::Tween*  t) ;

/// @brief Method LogNonPathTween, addr 0x18e4070, size 0x48, virtual false, abstract: false, final false
static inline void LogNonPathTween(::DG::Tweening::Tween*  t) ;

/// @brief Method LogNullTween, addr 0x18e402c, size 0x44, virtual false, abstract: false, final false
static inline void LogNullTween(::DG::Tweening::Tween*  t) ;

/// @brief Method LogRemoveActiveTweenError, addr 0x18e4194, size 0x60, virtual false, abstract: false, final false
static inline void LogRemoveActiveTweenError(::StringW  errorInfo, ::DG::Tweening::Tween*  t) ;

/// @brief Method LogReport, addr 0x18e3d50, size 0x128, virtual false, abstract: false, final false
static inline void LogReport(::System::Object*  message) ;

/// @brief Method LogSafeModeReport, addr 0x18e3e78, size 0x128, virtual false, abstract: false, final false
static inline void LogSafeModeReport(::System::Object*  message) ;

/// @brief Method LogWarning, addr 0x18e3954, size 0x2d8, virtual false, abstract: false, final false
static inline void LogWarning(::System::Object*  message, ::DG::Tweening::Tween*  t) ;

/// @brief Method SetLogPriority, addr 0x18e4254, size 0x74, virtual false, abstract: false, final false
static inline void SetLogPriority(::DG::Tweening::LogBehaviour  logBehaviour) ;

static inline int32_t getStaticF__logPriority() ;

/// @brief Method get_logPriority, addr 0x18e37e8, size 0x48, virtual false, abstract: false, final false
static inline int32_t get_logPriority() ;

static inline void setStaticF__logPriority(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Debugger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Debugger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Debugger(Debugger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Debugger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Debugger(Debugger const& ) = delete;

/// @brief Field _LogPrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  _LogPrefix{u"<color=#0099bc><b>DOTWEEN \u{25ba} </b></color>"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10835};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::Debugger, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
NEED_NO_BOX(::DG::Tweening::Core::Debugger);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::Debugger*, "DG.Tweening.Core", "Debugger");
