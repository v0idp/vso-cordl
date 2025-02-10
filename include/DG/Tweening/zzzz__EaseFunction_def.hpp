#pragma once
// IWYU pragma private; include "DG/Tweening/EaseFunction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EaseFunction)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace DG::Tweening {
class EaseFunction;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::EaseFunction);
// Dependencies System.MulticastDelegate
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.EaseFunction
class CORDL_TYPE EaseFunction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18c1a7c, size 0xcc, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x18c1b48, size 0x28, virtual true, abstract: false, final false
inline float_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x18c1a68, size 0x14, virtual true, abstract: false, final false
inline float_t Invoke(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

static inline ::DG::Tweening::EaseFunction* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18c19dc, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EaseFunction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EaseFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EaseFunction(EaseFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EaseFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EaseFunction(EaseFunction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10688};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::EaseFunction, 0x80>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::EaseFunction);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::EaseFunction*, "DG.Tweening", "EaseFunction");
