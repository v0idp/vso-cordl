#pragma once
// IWYU pragma private; include "Vuplex/WebView/CanvasPointerInputDetector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Vuplex/WebView/zzzz__DefaultPointerInputDetector_def.hpp"
CORDL_MODULE_EXPORT(CanvasPointerInputDetector)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace Vuplex::WebView::Internal {
template<typename TResult>
class CachingGetter_1;
}
// Forward declare root types
namespace Vuplex::WebView {
class CanvasPointerInputDetector;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::CanvasPointerInputDetector);
// Dependencies Vuplex.WebView.DefaultPointerInputDetector
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.CanvasPointerInputDetector
class CORDL_TYPE CanvasPointerInputDetector : public ::Vuplex::WebView::DefaultPointerInputDetector {
public:
// Declarations
/// @brief Field _cachedRectTransform, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedRectTransform, put=__cordl_internal_set__cachedRectTransform)) ::UnityW<::UnityEngine::RectTransform>  _cachedRectTransform;

/// @brief Field _canvasGetter, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvasGetter, put=__cordl_internal_set__canvasGetter)) ::Vuplex::WebView::Internal::CachingGetter_1<::UnityW<::UnityEngine::Canvas>>*  _canvasGetter;

static inline ::Vuplex::WebView::CanvasPointerInputDetector* New_ctor() ;

/// @brief Method Start, addr 0x16dbf58, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__cachedRectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__cachedRectTransform() ;

constexpr ::Vuplex::WebView::Internal::CachingGetter_1<::UnityW<::UnityEngine::Canvas>>* const& __cordl_internal_get__canvasGetter() const;

constexpr ::Vuplex::WebView::Internal::CachingGetter_1<::UnityW<::UnityEngine::Canvas>>*& __cordl_internal_get__canvasGetter() ;

constexpr void __cordl_internal_set__cachedRectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__canvasGetter(::Vuplex::WebView::Internal::CachingGetter_1<::UnityW<::UnityEngine::Canvas>>*  value) ;

/// @brief Method _convertToNormalizedPoint, addr 0x16dbb8c, size 0x1dc, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 _convertToNormalizedPoint(::UnityEngine::EventSystems::PointerEventData*  pointerEventData) ;

/// @brief Method _convertToNormalizedPoint, addr 0x16dbe94, size 0x50, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 _convertToNormalizedPoint(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method _convertVector2ToNormalizedPoint, addr 0x16dbdfc, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _convertVector2ToNormalizedPoint(::UnityEngine::Vector2  localPoint) ;

/// @brief Method .ctor, addr 0x16dbf5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _getRectTransform, addr 0x16dbd68, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> _getRectTransform() ;

/// @brief Method _positionIsZero, addr 0x16dbee4, size 0x74, virtual true, abstract: false, final false
inline bool _positionIsZero(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasPointerInputDetector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasPointerInputDetector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasPointerInputDetector(CanvasPointerInputDetector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasPointerInputDetector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasPointerInputDetector(CanvasPointerInputDetector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{127};

/// @brief Field _cachedRectTransform, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____cachedRectTransform;

/// @brief Field _canvasGetter, offset: 0x70, size: 0x8, def value: None
 ::Vuplex::WebView::Internal::CachingGetter_1<::UnityW<::UnityEngine::Canvas>>*  ____canvasGetter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::CanvasPointerInputDetector, ____cachedRectTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::CanvasPointerInputDetector, ____canvasGetter) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::CanvasPointerInputDetector, 0x78>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::CanvasPointerInputDetector);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::CanvasPointerInputDetector*, "Vuplex.WebView", "CanvasPointerInputDetector");
