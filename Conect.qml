import QtQuick 2.4
import QtPositioning 5.12
import QtLocation 5.12


ConectForm {
    PositionSource{
    active: true
    onPositionChanged: {
    console.log(position.coordinate);
    }
    }

    Map{
    id:map
    anchors.fill:parent
    plugin:Plugin{name:"osm"}
    center: QtPositioning.coordinate(59.930243,10.714635)
    zoomLevel: 15
MapQuickItem{
    id:maker
coordinate: QtPositioning.coordinate(59.930243,10.714635)
sourceItem: Image {
    id: image
    source: "file:marca.png"
}
anchorPoint.x: image.width/2
anchorPoint.y: image.height
}

    }
    GeocodeModel{
    plugin: map.plugin
    query: "blabla 116,Olso"
    onLocationsChanged: {
    if(count)
        maker.coordinate=get(0).coordinate;

    }
    Component.onCompleted: update()
    }

    RouteModel{
    id:routeModel
    plugin: map.plugin
    query: RouteQuery{id:routeQuery}
    RouteQuery.addWaypoint(QtPositioning.coordinate(43.33,43.22));
     RouteQuery.addWaypoint(QtPositioning.coordinate(52.43,52.34))
    update()
    }

}//FIN PRINCIPAL
